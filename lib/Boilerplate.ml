(**
   Boilerplate to be used as a template when mapping the json CST
   to another type of tree.
*)

module R = Tree_sitter_run.Raw_tree

(* Disable warnings against unused variables *)
[@@@warning "-26-27"]

(* Disable warning against unused 'rec' *)
[@@@warning "-39"]

type env = unit

let token (env : env) (tok : Tree_sitter_run.Token.t) =
  R.Token tok

let blank (env : env) () =
  R.Tuple []

let map_semgrep_metavariable (env : env) (tok : CST.semgrep_metavariable) =
  (* semgrep_metavariable *) token env tok

let map_escape_sequence (env : env) (tok : CST.escape_sequence) =
  (* escape_sequence *) token env tok

let map_string_content_ (env : env) (tok : CST.string_content_) =
  (* pattern "[^\\\\\"\\n]+" *) token env tok

let map_number (env : env) (tok : CST.number) =
  (* number *) token env tok

let map_string_content (env : env) (xs : CST.string_content) =
  R.List (List.map (fun x ->
    (match x with
    | `Str_content_ tok -> R.Case ("Str_content_",
        (* pattern "[^\\\\\"\\n]+" *) token env tok
      )
    | `Esc_seq tok -> R.Case ("Esc_seq",
        (* escape_sequence *) token env tok
      )
    )
  ) xs)

let map_string_ (env : env) (x : CST.string_) =
  (match x with
  | `Choice_DQUOT_DQUOT x -> R.Case ("Choice_DQUOT_DQUOT",
      (match x with
      | `DQUOT_DQUOT (v1, v2) -> R.Case ("DQUOT_DQUOT",
          let v1 = (* "\"" *) token env v1 in
          let v2 = (* "\"" *) token env v2 in
          R.Tuple [v1; v2]
        )
      | `DQUOT_str_content_DQUOT (v1, v2, v3) -> R.Case ("DQUOT_str_content_DQUOT",
          let v1 = (* "\"" *) token env v1 in
          let v2 = map_string_content env v2 in
          let v3 = (* "\"" *) token env v3 in
          R.Tuple [v1; v2; v3]
        )
      )
    )
  | `Semg_meta tok -> R.Case ("Semg_meta",
      (* semgrep_metavariable *) token env tok
    )
  )

let rec map_array_ (env : env) ((v1, v2, v3) : CST.array_) =
  let v1 = (* "[" *) token env v1 in
  let v2 =
    (match v2 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = map_value env v1 in
        let v2 =
          R.List (List.map (fun (v1, v2) ->
            let v1 = (* "," *) token env v1 in
            let v2 = map_value env v2 in
            R.Tuple [v1; v2]
          ) v2)
        in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  let v3 = (* "]" *) token env v3 in
  R.Tuple [v1; v2; v3]

and map_object_ (env : env) ((v1, v2, v3, v4) : CST.object_) =
  let v1 = (* "{" *) token env v1 in
  let v2 =
    (match v2 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = map_pair env v1 in
        let v2 =
          R.List (List.map (fun (v1, v2) ->
            let v1 = (* "," *) token env v1 in
            let v2 = map_pair env v2 in
            R.Tuple [v1; v2]
          ) v2)
        in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  let v3 =
    (match v3 with
    | Some tok -> R.Option (Some (
        (* "," *) token env tok
      ))
    | None -> R.Option None)
  in
  let v4 = (* "}" *) token env v4 in
  R.Tuple [v1; v2; v3; v4]

and map_pair (env : env) (x : CST.pair) =
  (match x with
  | `Str_COLON_value (v1, v2, v3) -> R.Case ("Str_COLON_value",
      let v1 = map_string_ env v1 in
      let v2 = (* ":" *) token env v2 in
      let v3 = map_value env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `Semg_ellips v1 -> R.Case ("Semg_ellips",
      (* "..." *) token env v1
    )
  )

and map_value (env : env) (x : CST.value) =
  (match x with
  | `Choice_obj x -> R.Case ("Choice_obj",
      (match x with
      | `Obj x -> R.Case ("Obj",
          map_object_ env x
        )
      | `Array x -> R.Case ("Array",
          map_array_ env x
        )
      | `Num tok -> R.Case ("Num",
          (* number *) token env tok
        )
      | `Str x -> R.Case ("Str",
          map_string_ env x
        )
      | `True tok -> R.Case ("True",
          (* "true" *) token env tok
        )
      | `False tok -> R.Case ("False",
          (* "false" *) token env tok
        )
      | `Null tok -> R.Case ("Null",
          (* "null" *) token env tok
        )
      )
    )
  | `Semg_ellips tok -> R.Case ("Semg_ellips",
      (* "..." *) token env tok
    )
  )

let map_document (env : env) (x : CST.document) =
  (match x with
  | `Rep_value xs -> R.Case ("Rep_value",
      R.List (List.map (map_value env) xs)
    )
  | `Pair_opt_COMMA (v1, v2) -> R.Case ("Pair_opt_COMMA",
      let v1 = map_pair env v1 in
      let v2 =
        (match v2 with
        | Some tok -> R.Option (Some (
            (* "," *) token env tok
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2]
    )
  )

let map_comment (env : env) (tok : CST.comment) =
  (* comment *) token env tok

let dump_tree root =
  map_document () root
  |> Tree_sitter_run.Raw_tree.to_channel stdout

let map_extra (env : env) (x : CST.extra) =
  match x with
  | `Comment (_loc, x) -> ("comment", "comment", map_comment env x)

let dump_extras (extras : CST.extras) =
  List.iter (fun extra ->
    let ts_rule_name, ocaml_type_name, raw_tree = map_extra () extra in
    let details =
      if ocaml_type_name <> ts_rule_name then
        Printf.sprintf " (OCaml type '%s')" ocaml_type_name
      else
        ""
    in
    Printf.printf "%s%s:\n" ts_rule_name details;
    Tree_sitter_run.Raw_tree.to_channel stdout raw_tree
  ) extras
