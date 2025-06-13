#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  sym_string_content_ = 8,
  sym_escape_sequence = 9,
  sym_number = 10,
  sym_true = 11,
  sym_false = 12,
  sym_null = 13,
  sym_comment = 14,
  sym_semgrep_metavariable = 15,
  sym_semgrep_ellipsis = 16,
  sym_identifier = 17,
  sym_document = 18,
  sym_value = 19,
  sym_object = 20,
  sym_pair = 21,
  sym_array = 22,
  sym_string = 23,
  sym_string_content = 24,
  aux_sym_document_repeat1 = 25,
  aux_sym_object_repeat1 = 26,
  aux_sym_array_repeat1 = 27,
  aux_sym_string_content_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content_] = "string_content_",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [sym_semgrep_metavariable] = "semgrep_metavariable",
  [sym_semgrep_ellipsis] = "semgrep_ellipsis",
  [sym_identifier] = "identifier",
  [sym_document] = "document",
  [sym_value] = "value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content_] = sym_string_content_,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [sym_semgrep_metavariable] = sym_semgrep_metavariable,
  [sym_semgrep_ellipsis] = sym_semgrep_ellipsis,
  [sym_identifier] = sym_identifier,
  [sym_document] = sym_document,
  [sym_value] = sym_value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content_] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_metavariable] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
};

static TSCharacterRange sym_identifier_character_set_1[] = {
  {'$', '$'}, {'A', 'Z'}, {'\\', '\\'}, {'_', '_'}, {'a', 'z'}, {0x7f, 0x9f}, {0xa1, 0x167f}, {0x1681, 0x1fff},
  {0x200c, 0x202e}, {0x2030, 0x205e}, {0x2061, 0x2fff}, {0x3001, 0xfefe}, {0xff00, 0x10ffff},
};

static TSCharacterRange sym_identifier_character_set_2[] = {
  {'$', '$'}, {'0', '9'}, {'A', 'Z'}, {'\\', '\\'}, {'_', '_'}, {'a', 'z'}, {0x7f, 0x9f}, {0xa1, 0x167f},
  {0x1681, 0x1fff}, {0x200c, 0x202e}, {0x2030, 0x205e}, {0x2061, 0x2fff}, {0x3001, 0xfefe}, {0xff00, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '"', 40,
        '$', 30,
        ',', 34,
        '-', 10,
        '.', 9,
        '/', 4,
        '0', 47,
        ':', 37,
        '[', 38,
        '\\', 24,
        ']', 39,
        'f', 11,
        'n', 21,
        't', 17,
        '{', 35,
        '}', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '}') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (set_contains(sym_identifier_character_set_1, 13, lookahead)) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '{') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '"', 46,
        '/', 46,
        '\\', 46,
        'b', 46,
        'f', 46,
        'n', 46,
        'r', 46,
        't', 46,
        'u', 46,
      );
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '"', 40,
        '$', 30,
        ',', 34,
        '-', 10,
        '.', 9,
        '/', 4,
        '0', 47,
        ':', 37,
        '[', 38,
        ']', 39,
        'f', 11,
        'n', 21,
        't', 17,
        '{', 35,
        '}', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '"', 40,
        '$', 72,
        ',', 34,
        '-', 10,
        '.', 9,
        '/', 4,
        '0', 47,
        ':', 37,
        '[', 38,
        '\\', 20,
        ']', 39,
        'f', 62,
        'n', 71,
        't', 68,
        '{', 35,
        '}', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_string_content_);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_string_content_);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_string_content_);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_string_content_);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_string_content_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(20);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(20);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '\\') ADVANCE(20);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (lookahead == '\\') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(65);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(52);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(54);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(69);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(56);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(66);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(70);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(64);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(63);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(67);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(1),
    [sym_semgrep_ellipsis] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(41),
    [sym_value] = STATE(3),
    [sym_object] = STATE(11),
    [sym_pair] = STATE(35),
    [sym_array] = STATE(11),
    [sym_string] = STATE(18),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(17),
    [sym_semgrep_ellipsis] = ACTIONS(19),
    [sym_identifier] = ACTIONS(17),
  },
  [2] = {
    [sym_value] = STATE(2),
    [sym_object] = STATE(11),
    [sym_array] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(32),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(38),
    [sym_semgrep_ellipsis] = ACTIONS(32),
    [sym_identifier] = ACTIONS(38),
  },
  [3] = {
    [sym_value] = STATE(2),
    [sym_object] = STATE(11),
    [sym_array] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(17),
    [sym_semgrep_ellipsis] = ACTIONS(13),
    [sym_identifier] = ACTIONS(17),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_number] = ACTIONS(43),
    [sym_true] = ACTIONS(45),
    [sym_false] = ACTIONS(45),
    [sym_null] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(45),
    [sym_semgrep_ellipsis] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_number] = ACTIONS(47),
    [sym_true] = ACTIONS(49),
    [sym_false] = ACTIONS(49),
    [sym_null] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(49),
    [sym_semgrep_ellipsis] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
  [6] = {
    [sym_value] = STATE(28),
    [sym_object] = STATE(11),
    [sym_array] = STATE(11),
    [sym_string] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(17),
    [sym_semgrep_ellipsis] = ACTIONS(13),
    [sym_identifier] = ACTIONS(17),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(53),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_null] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(55),
    [sym_semgrep_ellipsis] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_true] = ACTIONS(59),
    [sym_false] = ACTIONS(59),
    [sym_null] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(59),
    [sym_semgrep_ellipsis] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(61),
    [sym_true] = ACTIONS(63),
    [sym_false] = ACTIONS(63),
    [sym_null] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(63),
    [sym_semgrep_ellipsis] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
  },
  [10] = {
    [sym_value] = STATE(29),
    [sym_object] = STATE(11),
    [sym_array] = STATE(11),
    [sym_string] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(17),
    [sym_semgrep_ellipsis] = ACTIONS(13),
    [sym_identifier] = ACTIONS(17),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [sym_true] = ACTIONS(67),
    [sym_false] = ACTIONS(67),
    [sym_null] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(67),
    [sym_semgrep_ellipsis] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [sym_null] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(71),
    [sym_semgrep_ellipsis] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_true] = ACTIONS(75),
    [sym_false] = ACTIONS(75),
    [sym_null] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(75),
    [sym_semgrep_ellipsis] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
  },
  [14] = {
    [sym_value] = STATE(36),
    [sym_object] = STATE(11),
    [sym_array] = STATE(11),
    [sym_string] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(17),
    [sym_semgrep_ellipsis] = ACTIONS(13),
    [sym_identifier] = ACTIONS(17),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(77),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_null] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(79),
    [sym_semgrep_ellipsis] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(81),
    [sym_true] = ACTIONS(83),
    [sym_false] = ACTIONS(83),
    [sym_null] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(83),
    [sym_semgrep_ellipsis] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_number] = ACTIONS(85),
    [sym_true] = ACTIONS(87),
    [sym_false] = ACTIONS(87),
    [sym_null] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(87),
    [sym_semgrep_ellipsis] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(67), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_semgrep_metavariable,
      sym_identifier,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_semgrep_ellipsis,
  [22] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(67), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_semgrep_metavariable,
      sym_identifier,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_semgrep_ellipsis,
  [44] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym_semgrep_ellipsis,
    STATE(27), 1,
      sym_pair,
    STATE(39), 1,
      sym_string,
    ACTIONS(17), 2,
      sym_semgrep_metavariable,
      sym_identifier,
  [70] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_semgrep_ellipsis,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_pair,
    STATE(39), 1,
      sym_string,
    ACTIONS(17), 2,
      sym_semgrep_metavariable,
      sym_identifier,
  [93] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_semgrep_ellipsis,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_pair,
    STATE(39), 1,
      sym_string,
    ACTIONS(17), 2,
      sym_semgrep_metavariable,
      sym_identifier,
  [116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_semgrep_ellipsis,
    STATE(34), 1,
      sym_pair,
    STATE(39), 1,
      sym_string,
    ACTIONS(17), 2,
      sym_semgrep_metavariable,
      sym_identifier,
  [136] = 5,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_string_content_repeat1,
    STATE(42), 1,
      sym_string_content,
    ACTIONS(105), 2,
      sym_string_content_,
      sym_escape_sequence,
  [153] = 4,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(111), 2,
      sym_string_content_,
      sym_escape_sequence,
  [167] = 4,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(115), 2,
      sym_string_content_,
      sym_escape_sequence,
  [181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_object_repeat1,
  [194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_array_repeat1,
  [207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_object_repeat1,
  [229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_array_repeat1,
  [242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_object_repeat1,
  [255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_array_repeat1,
  [268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_COMMA,
  [286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COLON,
  [316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
  [323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
  [330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 22,
  [SMALL_STATE(20)] = 44,
  [SMALL_STATE(21)] = 70,
  [SMALL_STATE(22)] = 93,
  [SMALL_STATE(23)] = 116,
  [SMALL_STATE(24)] = 136,
  [SMALL_STATE(25)] = 153,
  [SMALL_STATE(26)] = 167,
  [SMALL_STATE(27)] = 181,
  [SMALL_STATE(28)] = 194,
  [SMALL_STATE(29)] = 207,
  [SMALL_STATE(30)] = 216,
  [SMALL_STATE(31)] = 229,
  [SMALL_STATE(32)] = 242,
  [SMALL_STATE(33)] = 255,
  [SMALL_STATE(34)] = 268,
  [SMALL_STATE(35)] = 276,
  [SMALL_STATE(36)] = 286,
  [SMALL_STATE(37)] = 294,
  [SMALL_STATE(38)] = 302,
  [SMALL_STATE(39)] = 309,
  [SMALL_STATE(40)] = 316,
  [SMALL_STATE(41)] = 323,
  [SMALL_STATE(42)] = 330,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_json(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
