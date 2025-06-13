#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  anon_sym_LT_DOT_DOT_DOT = 18,
  anon_sym_DOT_DOT_DOT_GT = 19,
  sym_document = 20,
  sym_value = 21,
  sym_object = 22,
  sym_pair = 23,
  sym_array = 24,
  sym_string = 25,
  sym_string_content = 26,
  sym_deep_ellipsis = 27,
  aux_sym_document_repeat1 = 28,
  aux_sym_object_repeat1 = 29,
  aux_sym_array_repeat1 = 30,
  aux_sym_string_content_repeat1 = 31,
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
  [anon_sym_LT_DOT_DOT_DOT] = "<...",
  [anon_sym_DOT_DOT_DOT_GT] = "...>",
  [sym_document] = "document",
  [sym_value] = "value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_deep_ellipsis] = "deep_ellipsis",
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
  [anon_sym_LT_DOT_DOT_DOT] = anon_sym_LT_DOT_DOT_DOT,
  [anon_sym_DOT_DOT_DOT_GT] = anon_sym_DOT_DOT_DOT_GT,
  [sym_document] = sym_document,
  [sym_value] = sym_value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_deep_ellipsis] = sym_deep_ellipsis,
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
  [anon_sym_LT_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT_GT] = {
    .visible = true,
    .named = false,
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
  [sym_deep_ellipsis] = {
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
  [43] = 43,
  [44] = 44,
  [45] = 45,
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
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '"', 50,
        '$', 39,
        ',', 44,
        '-', 18,
        '.', 12,
        '/', 4,
        '0', 57,
        ':', 47,
        '<', 16,
        '[', 48,
        '\\', 33,
        ']', 49,
        'f', 20,
        'n', 30,
        't', 26,
        '{', 45,
        '}', 46,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '}') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (set_contains(sym_identifier_character_set_1, 13, lookahead)) ADVANCE(84);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(85);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == '{') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '"', 56,
        '/', 56,
        '\\', 56,
        'b', 56,
        'f', 56,
        'n', 56,
        'r', 56,
        't', 56,
        'u', 56,
      );
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(70);
      END_STATE();
    case 40:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '"', 50,
        '$', 39,
        ',', 44,
        '-', 18,
        '.', 12,
        '/', 4,
        '0', 57,
        ':', 47,
        '<', 16,
        '[', 48,
        ']', 49,
        'f', 20,
        'n', 30,
        't', 26,
        '{', 45,
        '}', 46,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '"', 50,
        '$', 83,
        ',', 44,
        '-', 18,
        '.', 12,
        '/', 4,
        '0', 57,
        ':', 47,
        '<', 16,
        '[', 48,
        '\\', 29,
        ']', 49,
        'f', 73,
        'n', 82,
        't', 79,
        '{', 45,
        '}', 46,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '"', 50,
        '$', 83,
        ',', 44,
        '-', 18,
        '.', 14,
        '/', 4,
        '0', 57,
        ':', 47,
        '<', 16,
        '[', 48,
        '\\', 29,
        ']', 49,
        'f', 73,
        'n', 82,
        't', 79,
        '{', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string_content_);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string_content_);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_string_content_);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string_content_);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string_content_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(29);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(29);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '\\') ADVANCE(29);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (lookahead == '\\') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(69);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(76);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(62);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(64);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(80);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(66);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(77);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(81);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 's') ADVANCE(75);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(74);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(78);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(69);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (set_contains(sym_identifier_character_set_2, 14, lookahead)) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_DOT_DOT_DOT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 42},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 42},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 41},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
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
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
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
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(44),
    [sym_value] = STATE(2),
    [sym_object] = STATE(8),
    [sym_pair] = STATE(36),
    [sym_array] = STATE(8),
    [sym_string] = STATE(20),
    [sym_deep_ellipsis] = STATE(8),
    [aux_sym_document_repeat1] = STATE(2),
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
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(21),
  },
  [2] = {
    [sym_value] = STATE(3),
    [sym_object] = STATE(8),
    [sym_array] = STATE(8),
    [sym_string] = STATE(8),
    [sym_deep_ellipsis] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
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
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(21),
  },
  [3] = {
    [sym_value] = STATE(3),
    [sym_object] = STATE(8),
    [sym_array] = STATE(8),
    [sym_string] = STATE(8),
    [sym_deep_ellipsis] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_number] = ACTIONS(36),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_null] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(42),
    [sym_semgrep_ellipsis] = ACTIONS(36),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(45),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_COLON] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(48),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [sym_number] = ACTIONS(48),
    [sym_true] = ACTIONS(50),
    [sym_false] = ACTIONS(50),
    [sym_null] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(50),
    [sym_semgrep_ellipsis] = ACTIONS(50),
    [sym_identifier] = ACTIONS(50),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(48),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_COLON] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_true] = ACTIONS(54),
    [sym_false] = ACTIONS(54),
    [sym_null] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(54),
    [sym_semgrep_ellipsis] = ACTIONS(54),
    [sym_identifier] = ACTIONS(54),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(52),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(52),
  },
  [6] = {
    [sym_value] = STATE(31),
    [sym_object] = STATE(8),
    [sym_array] = STATE(8),
    [sym_string] = STATE(8),
    [sym_deep_ellipsis] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(17),
    [sym_semgrep_ellipsis] = ACTIONS(13),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(21),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [sym_number] = ACTIONS(58),
    [sym_true] = ACTIONS(60),
    [sym_false] = ACTIONS(60),
    [sym_null] = ACTIONS(60),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(60),
    [sym_semgrep_ellipsis] = ACTIONS(60),
    [sym_identifier] = ACTIONS(60),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(58),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [sym_number] = ACTIONS(62),
    [sym_true] = ACTIONS(64),
    [sym_false] = ACTIONS(64),
    [sym_null] = ACTIONS(64),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(64),
    [sym_semgrep_ellipsis] = ACTIONS(64),
    [sym_identifier] = ACTIONS(64),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(62),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_RBRACK] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [sym_number] = ACTIONS(66),
    [sym_true] = ACTIONS(68),
    [sym_false] = ACTIONS(68),
    [sym_null] = ACTIONS(68),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(68),
    [sym_semgrep_ellipsis] = ACTIONS(68),
    [sym_identifier] = ACTIONS(68),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(66),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(66),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [sym_number] = ACTIONS(70),
    [sym_true] = ACTIONS(72),
    [sym_false] = ACTIONS(72),
    [sym_null] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(72),
    [sym_semgrep_ellipsis] = ACTIONS(72),
    [sym_identifier] = ACTIONS(72),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(70),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(70),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [sym_number] = ACTIONS(74),
    [sym_true] = ACTIONS(76),
    [sym_false] = ACTIONS(76),
    [sym_null] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(76),
    [sym_semgrep_ellipsis] = ACTIONS(76),
    [sym_identifier] = ACTIONS(76),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(74),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym_number] = ACTIONS(78),
    [sym_true] = ACTIONS(80),
    [sym_false] = ACTIONS(80),
    [sym_null] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(80),
    [sym_semgrep_ellipsis] = ACTIONS(80),
    [sym_identifier] = ACTIONS(80),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(78),
  },
  [13] = {
    [sym_value] = STATE(38),
    [sym_object] = STATE(8),
    [sym_array] = STATE(8),
    [sym_string] = STATE(8),
    [sym_deep_ellipsis] = STATE(8),
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
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(21),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [sym_number] = ACTIONS(82),
    [sym_true] = ACTIONS(84),
    [sym_false] = ACTIONS(84),
    [sym_null] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(84),
    [sym_semgrep_ellipsis] = ACTIONS(84),
    [sym_identifier] = ACTIONS(84),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(82),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(82),
  },
  [15] = {
    [sym_value] = STATE(43),
    [sym_object] = STATE(8),
    [sym_array] = STATE(8),
    [sym_string] = STATE(8),
    [sym_deep_ellipsis] = STATE(8),
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
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(21),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [sym_number] = ACTIONS(86),
    [sym_true] = ACTIONS(88),
    [sym_false] = ACTIONS(88),
    [sym_null] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(88),
    [sym_semgrep_ellipsis] = ACTIONS(88),
    [sym_identifier] = ACTIONS(88),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(86),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(86),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_number] = ACTIONS(90),
    [sym_true] = ACTIONS(92),
    [sym_false] = ACTIONS(92),
    [sym_null] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(92),
    [sym_semgrep_ellipsis] = ACTIONS(92),
    [sym_identifier] = ACTIONS(92),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(90),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(90),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_number] = ACTIONS(94),
    [sym_true] = ACTIONS(96),
    [sym_false] = ACTIONS(96),
    [sym_null] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(96),
    [sym_semgrep_ellipsis] = ACTIONS(96),
    [sym_identifier] = ACTIONS(96),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(94),
    [anon_sym_DOT_DOT_DOT_GT] = ACTIONS(94),
  },
  [19] = {
    [sym_value] = STATE(32),
    [sym_object] = STATE(8),
    [sym_array] = STATE(8),
    [sym_string] = STATE(8),
    [sym_deep_ellipsis] = STATE(8),
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
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COLON,
    ACTIONS(64), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_semgrep_metavariable,
      sym_identifier,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_semgrep_ellipsis,
      anon_sym_LT_DOT_DOT_DOT,
  [23] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(64), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_semgrep_metavariable,
      sym_identifier,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_semgrep_ellipsis,
      anon_sym_LT_DOT_DOT_DOT,
  [46] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      sym_semgrep_ellipsis,
    STATE(35), 1,
      sym_pair,
    STATE(45), 1,
      sym_string,
    ACTIONS(17), 2,
      sym_semgrep_metavariable,
      sym_identifier,
  [72] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym_semgrep_ellipsis,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_pair,
    STATE(45), 1,
      sym_string,
    ACTIONS(17), 2,
      sym_semgrep_metavariable,
      sym_identifier,
  [95] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym_semgrep_ellipsis,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_pair,
    STATE(45), 1,
      sym_string,
    ACTIONS(17), 2,
      sym_semgrep_metavariable,
      sym_identifier,
  [118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym_semgrep_ellipsis,
    STATE(39), 1,
      sym_pair,
    STATE(45), 1,
      sym_string,
    ACTIONS(17), 2,
      sym_semgrep_metavariable,
      sym_identifier,
  [138] = 5,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_string_content_repeat1,
    STATE(42), 1,
      sym_string_content,
    ACTIONS(114), 2,
      sym_string_content_,
      sym_escape_sequence,
  [155] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(120), 2,
      sym_string_content_,
      sym_escape_sequence,
  [169] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(124), 2,
      sym_string_content_,
      sym_escape_sequence,
  [183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_array_repeat1,
  [196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_object_repeat1,
  [209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_array_repeat1,
  [222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_object_repeat1,
  [244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_array_repeat1,
  [257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_object_repeat1,
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      anon_sym_COMMA,
  [280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
  [318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
  [325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DOT_DOT_DOT_GT,
  [332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
  [339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 23,
  [SMALL_STATE(22)] = 46,
  [SMALL_STATE(23)] = 72,
  [SMALL_STATE(24)] = 95,
  [SMALL_STATE(25)] = 118,
  [SMALL_STATE(26)] = 138,
  [SMALL_STATE(27)] = 155,
  [SMALL_STATE(28)] = 169,
  [SMALL_STATE(29)] = 183,
  [SMALL_STATE(30)] = 196,
  [SMALL_STATE(31)] = 209,
  [SMALL_STATE(32)] = 222,
  [SMALL_STATE(33)] = 231,
  [SMALL_STATE(34)] = 244,
  [SMALL_STATE(35)] = 257,
  [SMALL_STATE(36)] = 270,
  [SMALL_STATE(37)] = 280,
  [SMALL_STATE(38)] = 288,
  [SMALL_STATE(39)] = 296,
  [SMALL_STATE(40)] = 304,
  [SMALL_STATE(41)] = 311,
  [SMALL_STATE(42)] = 318,
  [SMALL_STATE(43)] = 325,
  [SMALL_STATE(44)] = 332,
  [SMALL_STATE(45)] = 339,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deep_ellipsis, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deep_ellipsis, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 1),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [159] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
