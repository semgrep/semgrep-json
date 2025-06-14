
(**
    Functions for parsing json programs into a CST.

    Generated by ocaml-tree-sitter.
*)

(** Parse a json program from a string into a typed OCaml CST.
    The resulting CST is [None] if parsing failed completely, otherwise
    some tree is returned even if some parsing errors occurred, in which
    case the error list is not empty.
*)
val string :
  ?src_file:string -> string ->
  (CST.document, CST.extra) Tree_sitter_run.Parsing_result.t

(** Parse a json program from a file into a typed OCaml CST.
    See the [string] function above for details. *)
val file :
  string ->
  (CST.document, CST.extra) Tree_sitter_run.Parsing_result.t

(** Parse a program into a tree-sitter CST. *)
val parse_source_string :
   ?src_file:string -> string -> Tree_sitter_run.Tree_sitter_parsing.t

(** Parse a source file into a tree-sitter CST. *)
val parse_source_file : string -> Tree_sitter_run.Tree_sitter_parsing.t

(** Parse a tree-sitter CST into an OCaml typed CST. *)
val parse_input_tree :
  Tree_sitter_run.Tree_sitter_parsing.t ->
  (CST.document, CST.extra) Tree_sitter_run.Parsing_result.t
