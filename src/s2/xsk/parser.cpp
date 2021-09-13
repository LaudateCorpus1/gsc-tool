// A Bison parser, made by GNU Bison 3.7.5.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

// "%code top" blocks.
#line 40 "parser.ypp"

#include "stdafx.hpp"
#include "parser.hpp"
#include "lexer.hpp"
using namespace xsk::gsc;
xsk::gsc::s2::parser::symbol_type S2lex(yyscan_t yyscanner, xsk::gsc::location& loc);

#line 47 "parser.cpp"

// Take the name prefix into account.
#define yylex   S2lex



#include "parser.hpp"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if S2DEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !S2DEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !S2DEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 13 "parser.ypp"
namespace xsk { namespace gsc { namespace s2 {
#line 149 "parser.cpp"

  /// Build a parser object.
  parser::parser (yyscan_t yyscanner_yyarg, xsk::gsc::location& loc_yyarg, xsk::gsc::program_ptr& ast_yyarg)
#if S2DEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      yy_lac_established_ (false),
      yyscanner (yyscanner_yyarg),
      loc (loc_yyarg),
      ast (ast_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | symbol kinds.  |
  `---------------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_anim: // anim
        value.YY_MOVE_OR_COPY< anim_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_animation: // animation
        value.YY_MOVE_OR_COPY< animation_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_animtree: // animtree
        value.YY_MOVE_OR_COPY< animtree_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_color: // color
        value.YY_MOVE_OR_COPY< color_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_constant: // constant
        value.YY_MOVE_OR_COPY< constant_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_define: // define
        value.YY_MOVE_OR_COPY< define_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_empty_array: // empty_array
        value.YY_MOVE_OR_COPY< empty_array_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_filled: // expr_arguments_filled
      case symbol_kind::S_expr_arguments_empty: // expr_arguments_empty
        value.YY_MOVE_OR_COPY< expr_arguments_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.YY_MOVE_OR_COPY< expr_assign_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
      case symbol_kind::S_expr_call_childthread: // expr_call_childthread
        value.YY_MOVE_OR_COPY< expr_call_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.YY_MOVE_OR_COPY< expr_call_type_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_for_expr: // for_expr
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_compare: // expr_compare
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.YY_MOVE_OR_COPY< expr_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_false: // false
        value.YY_MOVE_OR_COPY< false_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_file: // file
        value.YY_MOVE_OR_COPY< file_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_float: // float
        value.YY_MOVE_OR_COPY< float_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_game: // game
        value.YY_MOVE_OR_COPY< game_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_include: // include
        value.YY_MOVE_OR_COPY< include_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_integer: // integer
        value.YY_MOVE_OR_COPY< integer_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_istring: // istring
        value.YY_MOVE_OR_COPY< istring_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_level: // level
        value.YY_MOVE_OR_COPY< level_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_name: // name
        value.YY_MOVE_OR_COPY< name_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_object: // object
        value.YY_MOVE_OR_COPY< node_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parameters: // parameters
        value.YY_MOVE_OR_COPY< parameters_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
        value.YY_MOVE_OR_COPY< program_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_self: // self
        value.YY_MOVE_OR_COPY< self_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FILE: // "file path"
      case symbol_kind::S_NAME: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_COLOR: // "color"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INT_DEC: // "int"
      case symbol_kind::S_INT_OCT: // "octal int"
      case symbol_kind::S_INT_BIN: // "binary int"
      case symbol_kind::S_INT_HEX: // "hexadecimal int"
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.YY_MOVE_OR_COPY< stmt_assign_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.YY_MOVE_OR_COPY< stmt_break_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.YY_MOVE_OR_COPY< stmt_breakpoint_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.YY_MOVE_OR_COPY< stmt_call_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.YY_MOVE_OR_COPY< stmt_case_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.YY_MOVE_OR_COPY< stmt_continue_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.YY_MOVE_OR_COPY< stmt_default_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.YY_MOVE_OR_COPY< stmt_endon_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.YY_MOVE_OR_COPY< stmt_for_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.YY_MOVE_OR_COPY< stmt_foreach_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.YY_MOVE_OR_COPY< stmt_if_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.YY_MOVE_OR_COPY< stmt_ifelse_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_block: // stmt_block
      case symbol_kind::S_stmt_list: // stmt_list
        value.YY_MOVE_OR_COPY< stmt_list_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.YY_MOVE_OR_COPY< stmt_notify_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.YY_MOVE_OR_COPY< stmt_prof_begin_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.YY_MOVE_OR_COPY< stmt_prof_end_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_for_stmt: // for_stmt
        value.YY_MOVE_OR_COPY< stmt_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.YY_MOVE_OR_COPY< stmt_return_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.YY_MOVE_OR_COPY< stmt_switch_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.YY_MOVE_OR_COPY< stmt_wait_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.YY_MOVE_OR_COPY< stmt_waitframe_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.YY_MOVE_OR_COPY< stmt_waittill_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.YY_MOVE_OR_COPY< stmt_waittillframeend_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.YY_MOVE_OR_COPY< stmt_waittillmatch_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.YY_MOVE_OR_COPY< stmt_while_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_string: // string
        value.YY_MOVE_OR_COPY< string_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_thisthread: // thisthread
        value.YY_MOVE_OR_COPY< thisthread_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_thread: // thread
        value.YY_MOVE_OR_COPY< thread_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_true: // true
        value.YY_MOVE_OR_COPY< true_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_undefined: // undefined
        value.YY_MOVE_OR_COPY< undefined_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_usingtree: // usingtree
        value.YY_MOVE_OR_COPY< usingtree_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_vector: // vector
        value.YY_MOVE_OR_COPY< vector_ptr > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_anim: // anim
        value.move< anim_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_animation: // animation
        value.move< animation_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_animtree: // animtree
        value.move< animtree_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_color: // color
        value.move< color_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_constant: // constant
        value.move< constant_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_define: // define
        value.move< define_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_empty_array: // empty_array
        value.move< empty_array_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_filled: // expr_arguments_filled
      case symbol_kind::S_expr_arguments_empty: // expr_arguments_empty
        value.move< expr_arguments_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.move< expr_assign_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
      case symbol_kind::S_expr_call_childthread: // expr_call_childthread
        value.move< expr_call_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.move< expr_call_type_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_for_expr: // for_expr
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_compare: // expr_compare
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.move< expr_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_false: // false
        value.move< false_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_file: // file
        value.move< file_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_float: // float
        value.move< float_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_game: // game
        value.move< game_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_include: // include
        value.move< include_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_integer: // integer
        value.move< integer_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_istring: // istring
        value.move< istring_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_level: // level
        value.move< level_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_name: // name
        value.move< name_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_object: // object
        value.move< node_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parameters: // parameters
        value.move< parameters_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
        value.move< program_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_self: // self
        value.move< self_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FILE: // "file path"
      case symbol_kind::S_NAME: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_COLOR: // "color"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INT_DEC: // "int"
      case symbol_kind::S_INT_OCT: // "octal int"
      case symbol_kind::S_INT_BIN: // "binary int"
      case symbol_kind::S_INT_HEX: // "hexadecimal int"
        value.move< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.move< stmt_assign_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.move< stmt_break_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.move< stmt_breakpoint_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.move< stmt_call_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.move< stmt_case_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.move< stmt_continue_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.move< stmt_default_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.move< stmt_endon_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.move< stmt_for_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.move< stmt_foreach_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.move< stmt_if_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.move< stmt_ifelse_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_block: // stmt_block
      case symbol_kind::S_stmt_list: // stmt_list
        value.move< stmt_list_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.move< stmt_notify_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.move< stmt_prof_begin_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.move< stmt_prof_end_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_for_stmt: // for_stmt
        value.move< stmt_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.move< stmt_return_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.move< stmt_switch_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.move< stmt_wait_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.move< stmt_waitframe_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.move< stmt_waittill_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.move< stmt_waittillframeend_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.move< stmt_waittillmatch_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.move< stmt_while_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_string: // string
        value.move< string_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_thisthread: // thisthread
        value.move< thisthread_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_thread: // thread
        value.move< thread_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_true: // true
        value.move< true_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_undefined: // undefined
        value.move< undefined_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_usingtree: // usingtree
        value.move< usingtree_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_vector: // vector
        value.move< vector_ptr > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_anim: // anim
        value.copy< anim_ptr > (that.value);
        break;

      case symbol_kind::S_animation: // animation
        value.copy< animation_ptr > (that.value);
        break;

      case symbol_kind::S_animtree: // animtree
        value.copy< animtree_ptr > (that.value);
        break;

      case symbol_kind::S_color: // color
        value.copy< color_ptr > (that.value);
        break;

      case symbol_kind::S_constant: // constant
        value.copy< constant_ptr > (that.value);
        break;

      case symbol_kind::S_define: // define
        value.copy< define_ptr > (that.value);
        break;

      case symbol_kind::S_empty_array: // empty_array
        value.copy< empty_array_ptr > (that.value);
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_filled: // expr_arguments_filled
      case symbol_kind::S_expr_arguments_empty: // expr_arguments_empty
        value.copy< expr_arguments_ptr > (that.value);
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.copy< expr_assign_ptr > (that.value);
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
      case symbol_kind::S_expr_call_childthread: // expr_call_childthread
        value.copy< expr_call_ptr > (that.value);
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.copy< expr_call_type_ptr > (that.value);
        break;

      case symbol_kind::S_for_expr: // for_expr
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_compare: // expr_compare
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.copy< expr_ptr > (that.value);
        break;

      case symbol_kind::S_false: // false
        value.copy< false_ptr > (that.value);
        break;

      case symbol_kind::S_file: // file
        value.copy< file_ptr > (that.value);
        break;

      case symbol_kind::S_float: // float
        value.copy< float_ptr > (that.value);
        break;

      case symbol_kind::S_game: // game
        value.copy< game_ptr > (that.value);
        break;

      case symbol_kind::S_include: // include
        value.copy< include_ptr > (that.value);
        break;

      case symbol_kind::S_integer: // integer
        value.copy< integer_ptr > (that.value);
        break;

      case symbol_kind::S_istring: // istring
        value.copy< istring_ptr > (that.value);
        break;

      case symbol_kind::S_level: // level
        value.copy< level_ptr > (that.value);
        break;

      case symbol_kind::S_name: // name
        value.copy< name_ptr > (that.value);
        break;

      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_object: // object
        value.copy< node_ptr > (that.value);
        break;

      case symbol_kind::S_parameters: // parameters
        value.copy< parameters_ptr > (that.value);
        break;

      case symbol_kind::S_program: // program
        value.copy< program_ptr > (that.value);
        break;

      case symbol_kind::S_self: // self
        value.copy< self_ptr > (that.value);
        break;

      case symbol_kind::S_FILE: // "file path"
      case symbol_kind::S_NAME: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_COLOR: // "color"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INT_DEC: // "int"
      case symbol_kind::S_INT_OCT: // "octal int"
      case symbol_kind::S_INT_BIN: // "binary int"
      case symbol_kind::S_INT_HEX: // "hexadecimal int"
        value.copy< std::string > (that.value);
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.copy< stmt_assign_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.copy< stmt_break_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.copy< stmt_breakpoint_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.copy< stmt_call_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.copy< stmt_case_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.copy< stmt_continue_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.copy< stmt_default_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.copy< stmt_endon_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.copy< stmt_for_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.copy< stmt_foreach_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.copy< stmt_if_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.copy< stmt_ifelse_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_block: // stmt_block
      case symbol_kind::S_stmt_list: // stmt_list
        value.copy< stmt_list_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.copy< stmt_notify_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.copy< stmt_prof_begin_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.copy< stmt_prof_end_ptr > (that.value);
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_for_stmt: // for_stmt
        value.copy< stmt_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.copy< stmt_return_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.copy< stmt_switch_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.copy< stmt_wait_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.copy< stmt_waitframe_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.copy< stmt_waittill_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.copy< stmt_waittillframeend_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.copy< stmt_waittillmatch_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.copy< stmt_while_ptr > (that.value);
        break;

      case symbol_kind::S_string: // string
        value.copy< string_ptr > (that.value);
        break;

      case symbol_kind::S_thisthread: // thisthread
        value.copy< thisthread_ptr > (that.value);
        break;

      case symbol_kind::S_thread: // thread
        value.copy< thread_ptr > (that.value);
        break;

      case symbol_kind::S_true: // true
        value.copy< true_ptr > (that.value);
        break;

      case symbol_kind::S_undefined: // undefined
        value.copy< undefined_ptr > (that.value);
        break;

      case symbol_kind::S_usingtree: // usingtree
        value.copy< usingtree_ptr > (that.value);
        break;

      case symbol_kind::S_vector: // vector
        value.copy< vector_ptr > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_anim: // anim
        value.move< anim_ptr > (that.value);
        break;

      case symbol_kind::S_animation: // animation
        value.move< animation_ptr > (that.value);
        break;

      case symbol_kind::S_animtree: // animtree
        value.move< animtree_ptr > (that.value);
        break;

      case symbol_kind::S_color: // color
        value.move< color_ptr > (that.value);
        break;

      case symbol_kind::S_constant: // constant
        value.move< constant_ptr > (that.value);
        break;

      case symbol_kind::S_define: // define
        value.move< define_ptr > (that.value);
        break;

      case symbol_kind::S_empty_array: // empty_array
        value.move< empty_array_ptr > (that.value);
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_filled: // expr_arguments_filled
      case symbol_kind::S_expr_arguments_empty: // expr_arguments_empty
        value.move< expr_arguments_ptr > (that.value);
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.move< expr_assign_ptr > (that.value);
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
      case symbol_kind::S_expr_call_childthread: // expr_call_childthread
        value.move< expr_call_ptr > (that.value);
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.move< expr_call_type_ptr > (that.value);
        break;

      case symbol_kind::S_for_expr: // for_expr
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_compare: // expr_compare
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.move< expr_ptr > (that.value);
        break;

      case symbol_kind::S_false: // false
        value.move< false_ptr > (that.value);
        break;

      case symbol_kind::S_file: // file
        value.move< file_ptr > (that.value);
        break;

      case symbol_kind::S_float: // float
        value.move< float_ptr > (that.value);
        break;

      case symbol_kind::S_game: // game
        value.move< game_ptr > (that.value);
        break;

      case symbol_kind::S_include: // include
        value.move< include_ptr > (that.value);
        break;

      case symbol_kind::S_integer: // integer
        value.move< integer_ptr > (that.value);
        break;

      case symbol_kind::S_istring: // istring
        value.move< istring_ptr > (that.value);
        break;

      case symbol_kind::S_level: // level
        value.move< level_ptr > (that.value);
        break;

      case symbol_kind::S_name: // name
        value.move< name_ptr > (that.value);
        break;

      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_object: // object
        value.move< node_ptr > (that.value);
        break;

      case symbol_kind::S_parameters: // parameters
        value.move< parameters_ptr > (that.value);
        break;

      case symbol_kind::S_program: // program
        value.move< program_ptr > (that.value);
        break;

      case symbol_kind::S_self: // self
        value.move< self_ptr > (that.value);
        break;

      case symbol_kind::S_FILE: // "file path"
      case symbol_kind::S_NAME: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_COLOR: // "color"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INT_DEC: // "int"
      case symbol_kind::S_INT_OCT: // "octal int"
      case symbol_kind::S_INT_BIN: // "binary int"
      case symbol_kind::S_INT_HEX: // "hexadecimal int"
        value.move< std::string > (that.value);
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.move< stmt_assign_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.move< stmt_break_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.move< stmt_breakpoint_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.move< stmt_call_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.move< stmt_case_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.move< stmt_continue_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.move< stmt_default_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.move< stmt_endon_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.move< stmt_for_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.move< stmt_foreach_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.move< stmt_if_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.move< stmt_ifelse_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_block: // stmt_block
      case symbol_kind::S_stmt_list: // stmt_list
        value.move< stmt_list_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.move< stmt_notify_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.move< stmt_prof_begin_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.move< stmt_prof_end_ptr > (that.value);
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_for_stmt: // for_stmt
        value.move< stmt_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.move< stmt_return_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.move< stmt_switch_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.move< stmt_wait_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.move< stmt_waitframe_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.move< stmt_waittill_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.move< stmt_waittillframeend_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.move< stmt_waittillmatch_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.move< stmt_while_ptr > (that.value);
        break;

      case symbol_kind::S_string: // string
        value.move< string_ptr > (that.value);
        break;

      case symbol_kind::S_thisthread: // thisthread
        value.move< thisthread_ptr > (that.value);
        break;

      case symbol_kind::S_thread: // thread
        value.move< thread_ptr > (that.value);
        break;

      case symbol_kind::S_true: // true
        value.move< true_ptr > (that.value);
        break;

      case symbol_kind::S_undefined: // undefined
        value.move< undefined_ptr > (that.value);
        break;

      case symbol_kind::S_usingtree: // usingtree
        value.move< usingtree_ptr > (that.value);
        break;

      case symbol_kind::S_vector: // vector
        value.move< vector_ptr > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if S2DEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if S2DEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // S2DEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    /// Discard the LAC context in case there still is one left from a
    /// previous invocation.
    yy_lac_discard_ ("init");

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (yyscanner, loc));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        if (!yy_lac_establish_ (yyla.kind ()))
           goto yyerrlab;
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        if (!yy_lac_establish_ (yyla.kind ()))
           goto yyerrlab;

        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    yy_lac_discard_ ("shift");
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_anim: // anim
        yylhs.value.emplace< anim_ptr > ();
        break;

      case symbol_kind::S_animation: // animation
        yylhs.value.emplace< animation_ptr > ();
        break;

      case symbol_kind::S_animtree: // animtree
        yylhs.value.emplace< animtree_ptr > ();
        break;

      case symbol_kind::S_color: // color
        yylhs.value.emplace< color_ptr > ();
        break;

      case symbol_kind::S_constant: // constant
        yylhs.value.emplace< constant_ptr > ();
        break;

      case symbol_kind::S_define: // define
        yylhs.value.emplace< define_ptr > ();
        break;

      case symbol_kind::S_empty_array: // empty_array
        yylhs.value.emplace< empty_array_ptr > ();
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_filled: // expr_arguments_filled
      case symbol_kind::S_expr_arguments_empty: // expr_arguments_empty
        yylhs.value.emplace< expr_arguments_ptr > ();
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        yylhs.value.emplace< expr_assign_ptr > ();
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
      case symbol_kind::S_expr_call_childthread: // expr_call_childthread
        yylhs.value.emplace< expr_call_ptr > ();
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        yylhs.value.emplace< expr_call_type_ptr > ();
        break;

      case symbol_kind::S_for_expr: // for_expr
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_compare: // expr_compare
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        yylhs.value.emplace< expr_ptr > ();
        break;

      case symbol_kind::S_false: // false
        yylhs.value.emplace< false_ptr > ();
        break;

      case symbol_kind::S_file: // file
        yylhs.value.emplace< file_ptr > ();
        break;

      case symbol_kind::S_float: // float
        yylhs.value.emplace< float_ptr > ();
        break;

      case symbol_kind::S_game: // game
        yylhs.value.emplace< game_ptr > ();
        break;

      case symbol_kind::S_include: // include
        yylhs.value.emplace< include_ptr > ();
        break;

      case symbol_kind::S_integer: // integer
        yylhs.value.emplace< integer_ptr > ();
        break;

      case symbol_kind::S_istring: // istring
        yylhs.value.emplace< istring_ptr > ();
        break;

      case symbol_kind::S_level: // level
        yylhs.value.emplace< level_ptr > ();
        break;

      case symbol_kind::S_name: // name
        yylhs.value.emplace< name_ptr > ();
        break;

      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_object: // object
        yylhs.value.emplace< node_ptr > ();
        break;

      case symbol_kind::S_parameters: // parameters
        yylhs.value.emplace< parameters_ptr > ();
        break;

      case symbol_kind::S_program: // program
        yylhs.value.emplace< program_ptr > ();
        break;

      case symbol_kind::S_self: // self
        yylhs.value.emplace< self_ptr > ();
        break;

      case symbol_kind::S_FILE: // "file path"
      case symbol_kind::S_NAME: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_COLOR: // "color"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INT_DEC: // "int"
      case symbol_kind::S_INT_OCT: // "octal int"
      case symbol_kind::S_INT_BIN: // "binary int"
      case symbol_kind::S_INT_HEX: // "hexadecimal int"
        yylhs.value.emplace< std::string > ();
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        yylhs.value.emplace< stmt_assign_ptr > ();
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        yylhs.value.emplace< stmt_break_ptr > ();
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        yylhs.value.emplace< stmt_breakpoint_ptr > ();
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        yylhs.value.emplace< stmt_call_ptr > ();
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        yylhs.value.emplace< stmt_case_ptr > ();
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        yylhs.value.emplace< stmt_continue_ptr > ();
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        yylhs.value.emplace< stmt_default_ptr > ();
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        yylhs.value.emplace< stmt_endon_ptr > ();
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        yylhs.value.emplace< stmt_for_ptr > ();
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        yylhs.value.emplace< stmt_foreach_ptr > ();
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        yylhs.value.emplace< stmt_if_ptr > ();
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        yylhs.value.emplace< stmt_ifelse_ptr > ();
        break;

      case symbol_kind::S_stmt_block: // stmt_block
      case symbol_kind::S_stmt_list: // stmt_list
        yylhs.value.emplace< stmt_list_ptr > ();
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        yylhs.value.emplace< stmt_notify_ptr > ();
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        yylhs.value.emplace< stmt_prof_begin_ptr > ();
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        yylhs.value.emplace< stmt_prof_end_ptr > ();
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_for_stmt: // for_stmt
        yylhs.value.emplace< stmt_ptr > ();
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        yylhs.value.emplace< stmt_return_ptr > ();
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        yylhs.value.emplace< stmt_switch_ptr > ();
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        yylhs.value.emplace< stmt_wait_ptr > ();
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        yylhs.value.emplace< stmt_waitframe_ptr > ();
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        yylhs.value.emplace< stmt_waittill_ptr > ();
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        yylhs.value.emplace< stmt_waittillframeend_ptr > ();
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        yylhs.value.emplace< stmt_waittillmatch_ptr > ();
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        yylhs.value.emplace< stmt_while_ptr > ();
        break;

      case symbol_kind::S_string: // string
        yylhs.value.emplace< string_ptr > ();
        break;

      case symbol_kind::S_thisthread: // thisthread
        yylhs.value.emplace< thisthread_ptr > ();
        break;

      case symbol_kind::S_thread: // thread
        yylhs.value.emplace< thread_ptr > ();
        break;

      case symbol_kind::S_true: // true
        yylhs.value.emplace< true_ptr > ();
        break;

      case symbol_kind::S_undefined: // undefined
        yylhs.value.emplace< undefined_ptr > ();
        break;

      case symbol_kind::S_usingtree: // usingtree
        yylhs.value.emplace< usingtree_ptr > ();
        break;

      case symbol_kind::S_vector: // vector
        yylhs.value.emplace< vector_ptr > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // root: program
#line 246 "parser.ypp"
              { ast = std::move(yystack_[0].value.as < program_ptr > ()); }
#line 1846 "parser.cpp"
    break;

  case 3: // root: %empty
#line 247 "parser.ypp"
              { ast = std::make_unique<node_program>(yylhs.location); }
#line 1852 "parser.cpp"
    break;

  case 4: // program: program include
#line 252 "parser.ypp"
        { yylhs.value.as < program_ptr > () = std::move(yystack_[1].value.as < program_ptr > ()); yylhs.value.as < program_ptr > ()->includes.push_back(std::move(yystack_[0].value.as < include_ptr > ())); }
#line 1858 "parser.cpp"
    break;

  case 5: // program: program define
#line 254 "parser.ypp"
        { yylhs.value.as < program_ptr > () = std::move(yystack_[1].value.as < program_ptr > ()); yylhs.value.as < program_ptr > ()->definitions.push_back(std::move(yystack_[0].value.as < define_ptr > ())); }
#line 1864 "parser.cpp"
    break;

  case 6: // program: include
#line 256 "parser.ypp"
        { yylhs.value.as < program_ptr > () = std::make_unique<node_program>(yylhs.location); yylhs.value.as < program_ptr > ()->includes.push_back(std::move(yystack_[0].value.as < include_ptr > ())); }
#line 1870 "parser.cpp"
    break;

  case 7: // program: define
#line 258 "parser.ypp"
        { yylhs.value.as < program_ptr > () = std::make_unique<node_program>(yylhs.location); yylhs.value.as < program_ptr > ()->definitions.push_back(std::move(yystack_[0].value.as < define_ptr > ())); }
#line 1876 "parser.cpp"
    break;

  case 8: // include: "#include" file ";"
#line 263 "parser.ypp"
        { yylhs.value.as < include_ptr > () = std::make_unique<node_include>(yylhs.location, std::move(yystack_[1].value.as < file_ptr > ())); }
#line 1882 "parser.cpp"
    break;

  case 9: // define: usingtree
#line 267 "parser.ypp"
                   { yylhs.value.as < define_ptr > ().as_usingtree = std::move(yystack_[0].value.as < usingtree_ptr > ()); }
#line 1888 "parser.cpp"
    break;

  case 10: // define: constant
#line 268 "parser.ypp"
                   { yylhs.value.as < define_ptr > ().as_constant = std::move(yystack_[0].value.as < constant_ptr > ()); }
#line 1894 "parser.cpp"
    break;

  case 11: // define: thread
#line 269 "parser.ypp"
                   { yylhs.value.as < define_ptr > ().as_thread = std::move(yystack_[0].value.as < thread_ptr > ()); }
#line 1900 "parser.cpp"
    break;

  case 12: // usingtree: "#using_animtree" "(" string ")" ";"
#line 274 "parser.ypp"
        { yylhs.value.as < usingtree_ptr > () = std::make_unique<node_usingtree>(yylhs.location, std::move(yystack_[2].value.as < string_ptr > ())); }
#line 1906 "parser.cpp"
    break;

  case 13: // constant: name "=" expr ";"
#line 279 "parser.ypp"
        { yylhs.value.as < constant_ptr > () = std::make_unique<node_constant>(yylhs.location, std::move(yystack_[3].value.as < name_ptr > ()), std::move(yystack_[1].value.as < expr_ptr > ())); }
#line 1912 "parser.cpp"
    break;

  case 14: // thread: name "(" parameters ")" stmt_block
#line 284 "parser.ypp"
        { yylhs.value.as < thread_ptr > () = std::make_unique<node_thread>(yylhs.location, std::move(yystack_[4].value.as < name_ptr > ()), std::move(yystack_[2].value.as < parameters_ptr > ()), std::move(yystack_[0].value.as < stmt_list_ptr > ())); }
#line 1918 "parser.cpp"
    break;

  case 15: // parameters: parameters "," name
#line 289 "parser.ypp"
        { yylhs.value.as < parameters_ptr > () = std::move(yystack_[2].value.as < parameters_ptr > ()); yylhs.value.as < parameters_ptr > ()->list.push_back(std::move(yystack_[0].value.as < name_ptr > ())); }
#line 1924 "parser.cpp"
    break;

  case 16: // parameters: name
#line 291 "parser.ypp"
        { yylhs.value.as < parameters_ptr > () = std::make_unique<node_parameters>(yylhs.location); yylhs.value.as < parameters_ptr > ()->list.push_back(std::move(yystack_[0].value.as < name_ptr > ())); }
#line 1930 "parser.cpp"
    break;

  case 17: // parameters: %empty
#line 293 "parser.ypp"
        { yylhs.value.as < parameters_ptr > () = std::make_unique<node_parameters>(yylhs.location); }
#line 1936 "parser.cpp"
    break;

  case 18: // stmt: stmt_block
#line 297 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_list = std::move(yystack_[0].value.as < stmt_list_ptr > ()); }
#line 1942 "parser.cpp"
    break;

  case 19: // stmt: stmt_call
#line 298 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_call = std::move(yystack_[0].value.as < stmt_call_ptr > ()); }
#line 1948 "parser.cpp"
    break;

  case 20: // stmt: stmt_assign
#line 299 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_assign = std::move(yystack_[0].value.as < stmt_assign_ptr > ()); }
#line 1954 "parser.cpp"
    break;

  case 21: // stmt: stmt_endon
#line 300 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_endon = std::move(yystack_[0].value.as < stmt_endon_ptr > ()); }
#line 1960 "parser.cpp"
    break;

  case 22: // stmt: stmt_notify
#line 301 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_notify = std::move(yystack_[0].value.as < stmt_notify_ptr > ()); }
#line 1966 "parser.cpp"
    break;

  case 23: // stmt: stmt_wait
#line 302 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_wait = std::move(yystack_[0].value.as < stmt_wait_ptr > ()); }
#line 1972 "parser.cpp"
    break;

  case 24: // stmt: stmt_waittill
#line 303 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_waittill = std::move(yystack_[0].value.as < stmt_waittill_ptr > ()); }
#line 1978 "parser.cpp"
    break;

  case 25: // stmt: stmt_waittillmatch
#line 304 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_waittillmatch = std::move(yystack_[0].value.as < stmt_waittillmatch_ptr > ()); }
#line 1984 "parser.cpp"
    break;

  case 26: // stmt: stmt_waittillframeend
#line 305 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_waittillframeend = std::move(yystack_[0].value.as < stmt_waittillframeend_ptr > ()); }
#line 1990 "parser.cpp"
    break;

  case 27: // stmt: stmt_waitframe
#line 306 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_waitframe = std::move(yystack_[0].value.as < stmt_waitframe_ptr > ()); }
#line 1996 "parser.cpp"
    break;

  case 28: // stmt: stmt_if
#line 307 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_if = std::move(yystack_[0].value.as < stmt_if_ptr > ()); }
#line 2002 "parser.cpp"
    break;

  case 29: // stmt: stmt_ifelse
#line 308 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_ifelse = std::move(yystack_[0].value.as < stmt_ifelse_ptr > ()); }
#line 2008 "parser.cpp"
    break;

  case 30: // stmt: stmt_while
#line 309 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_while = std::move(yystack_[0].value.as < stmt_while_ptr > ()); }
#line 2014 "parser.cpp"
    break;

  case 31: // stmt: stmt_for
#line 310 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_for = std::move(yystack_[0].value.as < stmt_for_ptr > ()); }
#line 2020 "parser.cpp"
    break;

  case 32: // stmt: stmt_foreach
#line 311 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_foreach = std::move(yystack_[0].value.as < stmt_foreach_ptr > ()); }
#line 2026 "parser.cpp"
    break;

  case 33: // stmt: stmt_switch
#line 312 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_switch = std::move(yystack_[0].value.as < stmt_switch_ptr > ()); }
#line 2032 "parser.cpp"
    break;

  case 34: // stmt: stmt_case
#line 313 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_case = std::move(yystack_[0].value.as < stmt_case_ptr > ()); }
#line 2038 "parser.cpp"
    break;

  case 35: // stmt: stmt_default
#line 314 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_default = std::move(yystack_[0].value.as < stmt_default_ptr > ()); }
#line 2044 "parser.cpp"
    break;

  case 36: // stmt: stmt_break
#line 315 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_break = std::move(yystack_[0].value.as < stmt_break_ptr > ()); }
#line 2050 "parser.cpp"
    break;

  case 37: // stmt: stmt_continue
#line 316 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_continue = std::move(yystack_[0].value.as < stmt_continue_ptr > ()); }
#line 2056 "parser.cpp"
    break;

  case 38: // stmt: stmt_return
#line 317 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_return = std::move(yystack_[0].value.as < stmt_return_ptr > ()); }
#line 2062 "parser.cpp"
    break;

  case 39: // stmt: stmt_breakpoint
#line 318 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_breakpoint = std::move(yystack_[0].value.as < stmt_breakpoint_ptr > ()); }
#line 2068 "parser.cpp"
    break;

  case 40: // stmt: stmt_prof_begin
#line 319 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_prof_begin = std::move(yystack_[0].value.as < stmt_prof_begin_ptr > ()); }
#line 2074 "parser.cpp"
    break;

  case 41: // stmt: stmt_prof_end
#line 320 "parser.ypp"
                             { yylhs.value.as < stmt_ptr > ().as_prof_end = std::move(yystack_[0].value.as < stmt_prof_end_ptr > ()); }
#line 2080 "parser.cpp"
    break;

  case 42: // stmt_block: "{" stmt_list "}"
#line 324 "parser.ypp"
                              { yylhs.value.as < stmt_list_ptr > () = std::move(yystack_[1].value.as < stmt_list_ptr > ()); }
#line 2086 "parser.cpp"
    break;

  case 43: // stmt_block: "{" "}"
#line 325 "parser.ypp"
                    { yylhs.value.as < stmt_list_ptr > () = std::make_unique<node_stmt_list>(yylhs.location); }
#line 2092 "parser.cpp"
    break;

  case 44: // stmt_list: stmt_list stmt
#line 330 "parser.ypp"
        { yylhs.value.as < stmt_list_ptr > () = std::move(yystack_[1].value.as < stmt_list_ptr > ()); yylhs.value.as < stmt_list_ptr > ()->stmts.push_back(std::move(yystack_[0].value.as < stmt_ptr > ())); }
#line 2098 "parser.cpp"
    break;

  case 45: // stmt_list: stmt
#line 332 "parser.ypp"
        { yylhs.value.as < stmt_list_ptr > () = std::make_unique<node_stmt_list>(yylhs.location); yylhs.value.as < stmt_list_ptr > ()->stmts.push_back(std::move(yystack_[0].value.as < stmt_ptr > ())); }
#line 2104 "parser.cpp"
    break;

  case 46: // stmt_call: expr_call ";"
#line 337 "parser.ypp"
        { yylhs.value.as < stmt_call_ptr > () = std::make_unique<node_stmt_call>(yylhs.location, std::move(yystack_[1].value.as < expr_call_ptr > ())); }
#line 2110 "parser.cpp"
    break;

  case 47: // stmt_call: expr_call_thread ";"
#line 339 "parser.ypp"
        { yylhs.value.as < stmt_call_ptr > () = std::make_unique<node_stmt_call>(yylhs.location, std::move(yystack_[1].value.as < expr_call_ptr > ())); }
#line 2116 "parser.cpp"
    break;

  case 48: // stmt_assign: expr_assign ";"
#line 344 "parser.ypp"
        { yylhs.value.as < stmt_assign_ptr > () = std::make_unique<node_stmt_assign>(yylhs.location, std::move(yystack_[1].value.as < expr_assign_ptr > ())); }
#line 2122 "parser.cpp"
    break;

  case 49: // stmt_endon: object "endon" "(" expr ")" ";"
#line 349 "parser.ypp"
        { yylhs.value.as < stmt_endon_ptr > () = std::make_unique<node_stmt_endon>(yylhs.location, std::move(yystack_[5].value.as < node_ptr > ()), std::move(yystack_[2].value.as < expr_ptr > ())); }
#line 2128 "parser.cpp"
    break;

  case 50: // stmt_notify: object "notify" "(" expr "," expr_arguments ")" ";"
#line 354 "parser.ypp"
        { yylhs.value.as < stmt_notify_ptr > () = std::make_unique<node_stmt_notify>(yylhs.location, std::move(yystack_[7].value.as < node_ptr > ()), std::move(yystack_[4].value.as < expr_ptr > ()), std::move(yystack_[2].value.as < expr_arguments_ptr > ())); }
#line 2134 "parser.cpp"
    break;

  case 51: // stmt_notify: object "notify" "(" expr ")" ";"
#line 356 "parser.ypp"
        { yylhs.value.as < stmt_notify_ptr > () = std::make_unique<node_stmt_notify>(yylhs.location, std::move(yystack_[5].value.as < node_ptr > ()), std::move(yystack_[2].value.as < expr_ptr > ()), std::make_unique<node_expr_arguments>(yylhs.location)); }
#line 2140 "parser.cpp"
    break;

  case 52: // stmt_wait: "wait" expr ";"
#line 361 "parser.ypp"
        { yylhs.value.as < stmt_wait_ptr > () = std::make_unique<node_stmt_wait>(yylhs.location, std::move(yystack_[1].value.as < expr_ptr > ())); }
#line 2146 "parser.cpp"
    break;

  case 53: // stmt_waittill: object "waittill" "(" expr "," expr_arguments ")" ";"
#line 366 "parser.ypp"
        { yylhs.value.as < stmt_waittill_ptr > () = std::make_unique<node_stmt_waittill>(yylhs.location, std::move(yystack_[7].value.as < node_ptr > ()), std::move(yystack_[4].value.as < expr_ptr > ()), std::move(yystack_[2].value.as < expr_arguments_ptr > ())); }
#line 2152 "parser.cpp"
    break;

  case 54: // stmt_waittill: object "waittill" "(" expr ")" ";"
#line 368 "parser.ypp"
        { yylhs.value.as < stmt_waittill_ptr > () = std::make_unique<node_stmt_waittill>(yylhs.location, std::move(yystack_[5].value.as < node_ptr > ()), std::move(yystack_[2].value.as < expr_ptr > ()), std::make_unique<node_expr_arguments>(yylhs.location)); }
#line 2158 "parser.cpp"
    break;

  case 55: // stmt_waittillmatch: object "waittillmatch" "(" expr "," expr_arguments ")" ";"
#line 373 "parser.ypp"
        { yylhs.value.as < stmt_waittillmatch_ptr > () = std::make_unique<node_stmt_waittillmatch>(yylhs.location, std::move(yystack_[7].value.as < node_ptr > ()), std::move(yystack_[4].value.as < expr_ptr > ()), std::move(yystack_[2].value.as < expr_arguments_ptr > ())); }
#line 2164 "parser.cpp"
    break;

  case 56: // stmt_waittillmatch: object "waittillmatch" "(" expr ")" ";"
#line 375 "parser.ypp"
        { yylhs.value.as < stmt_waittillmatch_ptr > () = std::make_unique<node_stmt_waittillmatch>(yylhs.location, std::move(yystack_[5].value.as < node_ptr > ()), std::move(yystack_[2].value.as < expr_ptr > ()), std::make_unique<node_expr_arguments>(yylhs.location)); }
#line 2170 "parser.cpp"
    break;

  case 57: // stmt_waittillframeend: "waittillframeend" ";"
#line 380 "parser.ypp"
        { yylhs.value.as < stmt_waittillframeend_ptr > () = std::make_unique<node_stmt_waittillframeend>(yylhs.location); }
#line 2176 "parser.cpp"
    break;

  case 58: // stmt_waitframe: "waitframe" ";"
#line 385 "parser.ypp"
        { yylhs.value.as < stmt_waitframe_ptr > () = std::make_unique<node_stmt_waitframe>(yylhs.location); }
#line 2182 "parser.cpp"
    break;

  case 59: // stmt_waitframe: "waitframe" "(" ")" ";"
#line 387 "parser.ypp"
        { yylhs.value.as < stmt_waitframe_ptr > () = std::make_unique<node_stmt_waitframe>(yylhs.location); }
#line 2188 "parser.cpp"
    break;

  case 60: // stmt_if: "if" "(" expr ")" stmt
#line 392 "parser.ypp"
        { yylhs.value.as < stmt_if_ptr > () = std::make_unique<node_stmt_if>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < stmt_ptr > ())); }
#line 2194 "parser.cpp"
    break;

  case 61: // stmt_ifelse: "if" "(" expr ")" stmt "else" stmt
#line 397 "parser.ypp"
        { yylhs.value.as < stmt_ifelse_ptr > () = std::make_unique<node_stmt_ifelse>(yylhs.location, std::move(yystack_[4].value.as < expr_ptr > ()), std::move(yystack_[2].value.as < stmt_ptr > ()), std::move(yystack_[0].value.as < stmt_ptr > ())); }
#line 2200 "parser.cpp"
    break;

  case 62: // stmt_while: "while" "(" expr ")" stmt
#line 402 "parser.ypp"
        { yylhs.value.as < stmt_while_ptr > () = std::make_unique<node_stmt_while>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < stmt_ptr > ())); }
#line 2206 "parser.cpp"
    break;

  case 63: // stmt_for: "for" "(" for_stmt ";" for_expr ";" for_stmt ")" stmt
#line 407 "parser.ypp"
        { yylhs.value.as < stmt_for_ptr > () = std::make_unique<node_stmt_for>(yylhs.location, std::move(yystack_[6].value.as < stmt_ptr > ()), std::move(yystack_[4].value.as < expr_ptr > ()), std::move(yystack_[2].value.as < stmt_ptr > ()), std::move(yystack_[0].value.as < stmt_ptr > ())); }
#line 2212 "parser.cpp"
    break;

  case 64: // stmt_foreach: "foreach" "(" name "in" expr ")" stmt
#line 412 "parser.ypp"
        { yylhs.value.as < stmt_foreach_ptr > () = std::make_unique<node_stmt_foreach>(yylhs.location, expr_ptr(std::move(yystack_[4].value.as < name_ptr > ())), std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < stmt_ptr > ())); }
#line 2218 "parser.cpp"
    break;

  case 65: // stmt_foreach: "foreach" "(" name "," name "in" expr ")" stmt
#line 414 "parser.ypp"
        { yylhs.value.as < stmt_foreach_ptr > () = std::make_unique<node_stmt_foreach>(yylhs.location, expr_ptr(std::move(yystack_[6].value.as < name_ptr > ())), expr_ptr(std::move(yystack_[4].value.as < name_ptr > ())), std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < stmt_ptr > ())); }
#line 2224 "parser.cpp"
    break;

  case 66: // stmt_switch: "switch" "(" expr ")" stmt_block
#line 419 "parser.ypp"
        { yylhs.value.as < stmt_switch_ptr > () = std::make_unique<node_stmt_switch>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < stmt_list_ptr > ())); }
#line 2230 "parser.cpp"
    break;

  case 67: // stmt_case: "case" integer ":"
#line 424 "parser.ypp"
        { yylhs.value.as < stmt_case_ptr > () = std::make_unique<node_stmt_case>(yylhs.location, expr_ptr(std::move(yystack_[1].value.as < integer_ptr > ())), std::make_unique<gsc::node_stmt_list>(yylhs.location)); }
#line 2236 "parser.cpp"
    break;

  case 68: // stmt_case: "case" string ":"
#line 426 "parser.ypp"
        { yylhs.value.as < stmt_case_ptr > () = std::make_unique<node_stmt_case>(yylhs.location, expr_ptr(std::move(yystack_[1].value.as < string_ptr > ())), std::make_unique<gsc::node_stmt_list>(yylhs.location)); }
#line 2242 "parser.cpp"
    break;

  case 69: // stmt_default: "default" ":"
#line 431 "parser.ypp"
        { yylhs.value.as < stmt_default_ptr > () = std::make_unique<node_stmt_default>(yylhs.location, std::make_unique<gsc::node_stmt_list>(yylhs.location)); }
#line 2248 "parser.cpp"
    break;

  case 70: // stmt_break: "break" ";"
#line 436 "parser.ypp"
        { yylhs.value.as < stmt_break_ptr > () = std::make_unique<node_stmt_break>(yylhs.location); }
#line 2254 "parser.cpp"
    break;

  case 71: // stmt_continue: "continue" ";"
#line 441 "parser.ypp"
        { yylhs.value.as < stmt_continue_ptr > () = std::make_unique<node_stmt_continue>(yylhs.location); }
#line 2260 "parser.cpp"
    break;

  case 72: // stmt_return: "return" expr ";"
#line 446 "parser.ypp"
        { yylhs.value.as < stmt_return_ptr > () = std::make_unique<node_stmt_return>(yylhs.location, std::move(yystack_[1].value.as < expr_ptr > ())); }
#line 2266 "parser.cpp"
    break;

  case 73: // stmt_return: "return" ";"
#line 448 "parser.ypp"
        { yylhs.value.as < stmt_return_ptr > () = std::make_unique<node_stmt_return>(yylhs.location, std::make_unique<node>(yylhs.location)); }
#line 2272 "parser.cpp"
    break;

  case 74: // stmt_breakpoint: "breakpoint" ";"
#line 453 "parser.ypp"
        { yylhs.value.as < stmt_breakpoint_ptr > () = std::make_unique<node_stmt_breakpoint>(yylhs.location); }
#line 2278 "parser.cpp"
    break;

  case 75: // stmt_prof_begin: "prof_begin" "(" expr_arguments ")" ";"
#line 458 "parser.ypp"
        { yylhs.value.as < stmt_prof_begin_ptr > () = std::make_unique<node_stmt_prof_begin>(yylhs.location, std::move(yystack_[2].value.as < expr_arguments_ptr > ())); }
#line 2284 "parser.cpp"
    break;

  case 76: // stmt_prof_end: "prof_end" "(" expr_arguments ")" ";"
#line 463 "parser.ypp"
        { yylhs.value.as < stmt_prof_end_ptr > () = std::make_unique<node_stmt_prof_end>(yylhs.location, std::move(yystack_[2].value.as < expr_arguments_ptr > ())); }
#line 2290 "parser.cpp"
    break;

  case 77: // for_stmt: expr_assign
#line 467 "parser.ypp"
                                        { yylhs.value.as < stmt_ptr > ().as_list = std::make_unique<node_stmt_list>(yylhs.location); yylhs.value.as < stmt_ptr > ().as_list->stmts.push_back(stmt_ptr(std::make_unique<node_stmt_assign>(yylhs.location, std::move(yystack_[0].value.as < expr_assign_ptr > ())))); }
#line 2296 "parser.cpp"
    break;

  case 78: // for_stmt: %empty
#line 468 "parser.ypp"
                                        { yylhs.value.as < stmt_ptr > ().as_node = std::make_unique<node>(yylhs.location); }
#line 2302 "parser.cpp"
    break;

  case 79: // for_expr: expr
#line 472 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > () = std::move(yystack_[0].value.as < expr_ptr > ()); }
#line 2308 "parser.cpp"
    break;

  case 80: // for_expr: %empty
#line 473 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node>(yylhs.location); }
#line 2314 "parser.cpp"
    break;

  case 81: // expr: expr_compare
#line 477 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > () = std::move(yystack_[0].value.as < expr_ptr > ()); }
#line 2320 "parser.cpp"
    break;

  case 82: // expr: expr_ternary
#line 478 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > () = std::move(yystack_[0].value.as < expr_ptr > ()); }
#line 2326 "parser.cpp"
    break;

  case 83: // expr: expr_binary
#line 479 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > () = std::move(yystack_[0].value.as < expr_ptr > ()); }
#line 2332 "parser.cpp"
    break;

  case 84: // expr: expr_primitive
#line 480 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > () = std::move(yystack_[0].value.as < expr_ptr > ()); }
#line 2338 "parser.cpp"
    break;

  case 85: // expr_assign: "++" object
#line 484 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_increment>(yylhs.location, std::move(yystack_[0].value.as < node_ptr > ())); }
#line 2344 "parser.cpp"
    break;

  case 86: // expr_assign: "--" object
#line 485 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_decrement>(yylhs.location, std::move(yystack_[0].value.as < node_ptr > ())); }
#line 2350 "parser.cpp"
    break;

  case 87: // expr_assign: object "++"
#line 486 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_increment>(yylhs.location, std::move(yystack_[1].value.as < node_ptr > ())); }
#line 2356 "parser.cpp"
    break;

  case 88: // expr_assign: object "--"
#line 487 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_decrement>(yylhs.location, std::move(yystack_[1].value.as < node_ptr > ())); }
#line 2362 "parser.cpp"
    break;

  case 89: // expr_assign: object "=" expr
#line 488 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_assign_equal>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2368 "parser.cpp"
    break;

  case 90: // expr_assign: object "|=" expr
#line 489 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_assign_bitwise_or>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2374 "parser.cpp"
    break;

  case 91: // expr_assign: object "&=" expr
#line 490 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_assign_bitwise_and>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2380 "parser.cpp"
    break;

  case 92: // expr_assign: object "^=" expr
#line 491 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_assign_bitwise_exor>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2386 "parser.cpp"
    break;

  case 93: // expr_assign: object "<<=" expr
#line 492 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_assign_shift_left>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()),std::move( yystack_[0].value.as < expr_ptr > ())); }
#line 2392 "parser.cpp"
    break;

  case 94: // expr_assign: object ">>=" expr
#line 493 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_assign_shift_right>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2398 "parser.cpp"
    break;

  case 95: // expr_assign: object "+=" expr
#line 494 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_assign_add>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2404 "parser.cpp"
    break;

  case 96: // expr_assign: object "-=" expr
#line 495 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_assign_sub>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2410 "parser.cpp"
    break;

  case 97: // expr_assign: object "*=" expr
#line 496 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_assign_mult>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2416 "parser.cpp"
    break;

  case 98: // expr_assign: object "/=" expr
#line 497 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_assign_div>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2422 "parser.cpp"
    break;

  case 99: // expr_assign: object "%=" expr
#line 498 "parser.ypp"
                                        { yylhs.value.as < expr_assign_ptr > () = std::make_unique<node_expr_assign_mod>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2428 "parser.cpp"
    break;

  case 100: // expr_compare: expr "||" expr
#line 502 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_or>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2434 "parser.cpp"
    break;

  case 101: // expr_compare: expr "&&" expr
#line 503 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_and>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2440 "parser.cpp"
    break;

  case 102: // expr_compare: expr "==" expr
#line 504 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_equality>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2446 "parser.cpp"
    break;

  case 103: // expr_compare: expr "!=" expr
#line 505 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_inequality>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2452 "parser.cpp"
    break;

  case 104: // expr_compare: expr "<=" expr
#line 506 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_less_equal>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2458 "parser.cpp"
    break;

  case 105: // expr_compare: expr ">=" expr
#line 507 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_greater_equal>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2464 "parser.cpp"
    break;

  case 106: // expr_compare: expr "<" expr
#line 508 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_less>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2470 "parser.cpp"
    break;

  case 107: // expr_compare: expr ">" expr
#line 509 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_greater>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2476 "parser.cpp"
    break;

  case 108: // expr_ternary: expr "?" expr ":" expr
#line 513 "parser.ypp"
                                              { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_ternary>(yylhs.location, std::move(yystack_[4].value.as < expr_ptr > ()), std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2482 "parser.cpp"
    break;

  case 109: // expr_binary: expr "|" expr
#line 517 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_bitwise_or>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2488 "parser.cpp"
    break;

  case 110: // expr_binary: expr "&" expr
#line 518 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_bitwise_and>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2494 "parser.cpp"
    break;

  case 111: // expr_binary: expr "^" expr
#line 519 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_bitwise_exor>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2500 "parser.cpp"
    break;

  case 112: // expr_binary: expr "<<" expr
#line 520 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_shift_left>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2506 "parser.cpp"
    break;

  case 113: // expr_binary: expr ">>" expr
#line 521 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_shift_right>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2512 "parser.cpp"
    break;

  case 114: // expr_binary: expr "+" expr
#line 522 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_add>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2518 "parser.cpp"
    break;

  case 115: // expr_binary: expr "-" expr
#line 523 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_sub>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2524 "parser.cpp"
    break;

  case 116: // expr_binary: expr "*" expr
#line 524 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_mult>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2530 "parser.cpp"
    break;

  case 117: // expr_binary: expr "/" expr
#line 525 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_div>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2536 "parser.cpp"
    break;

  case 118: // expr_binary: expr "%" expr
#line 526 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_mod>(yylhs.location, std::move(yystack_[2].value.as < expr_ptr > ()), std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2542 "parser.cpp"
    break;

  case 119: // expr_primitive: "(" expr ")"
#line 530 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > () = std::move(yystack_[1].value.as < expr_ptr > ()); }
#line 2548 "parser.cpp"
    break;

  case 120: // expr_primitive: "~" expr
#line 531 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_complement>(yylhs.location, std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2554 "parser.cpp"
    break;

  case 121: // expr_primitive: "!" expr
#line 532 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::make_unique<node_expr_not>(yylhs.location, std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2560 "parser.cpp"
    break;

  case 122: // expr_primitive: expr_call
#line 533 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < expr_call_ptr > ()); }
#line 2566 "parser.cpp"
    break;

  case 123: // expr_primitive: expr_call_thread
#line 534 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < expr_call_ptr > ()); }
#line 2572 "parser.cpp"
    break;

  case 124: // expr_primitive: expr_call_childthread
#line 535 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < expr_call_ptr > ()); }
#line 2578 "parser.cpp"
    break;

  case 125: // expr_primitive: expr_function
#line 536 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < node_ptr > ()); }
#line 2584 "parser.cpp"
    break;

  case 126: // expr_primitive: expr_add_array
#line 537 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < node_ptr > ()); }
#line 2590 "parser.cpp"
    break;

  case 127: // expr_primitive: expr_array
#line 538 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < node_ptr > ()); }
#line 2596 "parser.cpp"
    break;

  case 128: // expr_primitive: expr_field
#line 539 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < node_ptr > ()); }
#line 2602 "parser.cpp"
    break;

  case 129: // expr_primitive: expr_size
#line 540 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < node_ptr > ()); }
#line 2608 "parser.cpp"
    break;

  case 130: // expr_primitive: thisthread
#line 541 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < thisthread_ptr > ()); }
#line 2614 "parser.cpp"
    break;

  case 131: // expr_primitive: empty_array
#line 542 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < empty_array_ptr > ()); }
#line 2620 "parser.cpp"
    break;

  case 132: // expr_primitive: undefined
#line 543 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < undefined_ptr > ()); }
#line 2626 "parser.cpp"
    break;

  case 133: // expr_primitive: game
#line 544 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < game_ptr > ()); }
#line 2632 "parser.cpp"
    break;

  case 134: // expr_primitive: self
#line 545 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < self_ptr > ()); }
#line 2638 "parser.cpp"
    break;

  case 135: // expr_primitive: anim
#line 546 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < anim_ptr > ()); }
#line 2644 "parser.cpp"
    break;

  case 136: // expr_primitive: level
#line 547 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < level_ptr > ()); }
#line 2650 "parser.cpp"
    break;

  case 137: // expr_primitive: animation
#line 548 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < animation_ptr > ()); }
#line 2656 "parser.cpp"
    break;

  case 138: // expr_primitive: animtree
#line 549 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < animtree_ptr > ()); }
#line 2662 "parser.cpp"
    break;

  case 139: // expr_primitive: name
#line 550 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < name_ptr > ()); }
#line 2668 "parser.cpp"
    break;

  case 140: // expr_primitive: istring
#line 551 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < istring_ptr > ()); }
#line 2674 "parser.cpp"
    break;

  case 141: // expr_primitive: string
#line 552 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < string_ptr > ()); }
#line 2680 "parser.cpp"
    break;

  case 142: // expr_primitive: color
#line 553 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < color_ptr > ()); }
#line 2686 "parser.cpp"
    break;

  case 143: // expr_primitive: vector
#line 554 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < vector_ptr > ()); }
#line 2692 "parser.cpp"
    break;

  case 144: // expr_primitive: float
#line 555 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < float_ptr > ()); }
#line 2698 "parser.cpp"
    break;

  case 145: // expr_primitive: integer
#line 556 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < integer_ptr > ()); }
#line 2704 "parser.cpp"
    break;

  case 146: // expr_primitive: false
#line 557 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < false_ptr > ()); }
#line 2710 "parser.cpp"
    break;

  case 147: // expr_primitive: true
#line 558 "parser.ypp"
                                        { yylhs.value.as < expr_ptr > ().as_node = std::move(yystack_[0].value.as < true_ptr > ()); }
#line 2716 "parser.cpp"
    break;

  case 148: // expr_call: expr_call_function
#line 562 "parser.ypp"
                                        { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, false, false, std::make_unique<node>(yylhs.location), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2722 "parser.cpp"
    break;

  case 149: // expr_call: expr_call_pointer
#line 563 "parser.ypp"
                                        { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, false, false, std::make_unique<node>(yylhs.location), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2728 "parser.cpp"
    break;

  case 150: // expr_call: object expr_call_function
#line 564 "parser.ypp"
                                        { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, false, false, std::move(yystack_[1].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2734 "parser.cpp"
    break;

  case 151: // expr_call: object expr_call_pointer
#line 565 "parser.ypp"
                                        { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, false, false, std::move(yystack_[1].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2740 "parser.cpp"
    break;

  case 152: // expr_call_thread: "thread" expr_call_function
#line 569 "parser.ypp"
                                        { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, true, false, std::make_unique<node>(yylhs.location), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2746 "parser.cpp"
    break;

  case 153: // expr_call_thread: "thread" expr_call_pointer
#line 570 "parser.ypp"
                                        { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, true, false, std::make_unique<node>(yylhs.location), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2752 "parser.cpp"
    break;

  case 154: // expr_call_thread: object "thread" expr_call_function
#line 571 "parser.ypp"
                                        { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, true, false, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2758 "parser.cpp"
    break;

  case 155: // expr_call_thread: object "thread" expr_call_pointer
#line 572 "parser.ypp"
                                        { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, true, false, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2764 "parser.cpp"
    break;

  case 156: // expr_call_childthread: "childthread" expr_call_function
#line 576 "parser.ypp"
                                            { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, false, true, std::make_unique<node>(yylhs.location), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2770 "parser.cpp"
    break;

  case 157: // expr_call_childthread: "childthread" expr_call_pointer
#line 577 "parser.ypp"
                                            { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, false, true, std::make_unique<node>(yylhs.location), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2776 "parser.cpp"
    break;

  case 158: // expr_call_childthread: object "childthread" expr_call_function
#line 578 "parser.ypp"
                                            { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, false, true, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2782 "parser.cpp"
    break;

  case 159: // expr_call_childthread: object "childthread" expr_call_pointer
#line 579 "parser.ypp"
                                            { yylhs.value.as < expr_call_ptr > () = std::make_unique<node_expr_call>(yylhs.location, false, true, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < expr_call_type_ptr > ())); }
#line 2788 "parser.cpp"
    break;

  case 160: // expr_call_function: name "(" expr_arguments ")"
#line 584 "parser.ypp"
        {yylhs.value.as < expr_call_type_ptr > ().as_func = std::make_unique<node_expr_call_function>(yylhs.location, std::make_unique<node_file>(), std::move(yystack_[3].value.as < name_ptr > ()), std::move(yystack_[1].value.as < expr_arguments_ptr > ())); }
#line 2794 "parser.cpp"
    break;

  case 161: // expr_call_function: file "::" name "(" expr_arguments ")"
#line 586 "parser.ypp"
        { yylhs.value.as < expr_call_type_ptr > ().as_func = std::make_unique<node_expr_call_function>(yylhs.location, std::move(yystack_[5].value.as < file_ptr > ()), std::move(yystack_[3].value.as < name_ptr > ()), std::move(yystack_[1].value.as < expr_arguments_ptr > ())); }
#line 2800 "parser.cpp"
    break;

  case 162: // expr_call_pointer: "[" "[" expr "]" "]" "(" expr_arguments ")"
#line 591 "parser.ypp"
        { yylhs.value.as < expr_call_type_ptr > ().as_pointer = std::make_unique<node_expr_call_pointer>(yylhs.location, false, std::move(yystack_[5].value.as < expr_ptr > ()), std::move(yystack_[1].value.as < expr_arguments_ptr > ())); }
#line 2806 "parser.cpp"
    break;

  case 163: // expr_call_pointer: "call" "[" "[" expr "]" "]" "(" expr_arguments ")"
#line 593 "parser.ypp"
        { yylhs.value.as < expr_call_type_ptr > ().as_pointer = std::make_unique<node_expr_call_pointer>(yylhs.location, true, std::move(yystack_[5].value.as < expr_ptr > ()), std::move(yystack_[1].value.as < expr_arguments_ptr > ())); }
#line 2812 "parser.cpp"
    break;

  case 164: // expr_arguments: expr_arguments_filled
#line 597 "parser.ypp"
                            { yylhs.value.as < expr_arguments_ptr > () = std::move(yystack_[0].value.as < expr_arguments_ptr > ()); }
#line 2818 "parser.cpp"
    break;

  case 165: // expr_arguments: expr_arguments_empty
#line 598 "parser.ypp"
                            { yylhs.value.as < expr_arguments_ptr > () = std::move(yystack_[0].value.as < expr_arguments_ptr > ()); }
#line 2824 "parser.cpp"
    break;

  case 166: // expr_arguments_filled: expr_arguments "," expr
#line 603 "parser.ypp"
        { yylhs.value.as < expr_arguments_ptr > () = std::move(yystack_[2].value.as < expr_arguments_ptr > ()); yylhs.value.as < expr_arguments_ptr > ()->list.push_back(std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2830 "parser.cpp"
    break;

  case 167: // expr_arguments_filled: expr
#line 605 "parser.ypp"
        { yylhs.value.as < expr_arguments_ptr > () = std::make_unique<node_expr_arguments>(yylhs.location); yylhs.value.as < expr_arguments_ptr > ()->list.push_back(std::move(yystack_[0].value.as < expr_ptr > ())); }
#line 2836 "parser.cpp"
    break;

  case 168: // expr_arguments_empty: %empty
#line 610 "parser.ypp"
        { yylhs.value.as < expr_arguments_ptr > () = std::make_unique<node_expr_arguments>(yylhs.location); }
#line 2842 "parser.cpp"
    break;

  case 169: // expr_function: "::" name
#line 615 "parser.ypp"
        { yylhs.value.as < node_ptr > () = std::make_unique<node_expr_function>(yylhs.location, std::make_unique<node_file>(yylhs.location), std::move(yystack_[0].value.as < name_ptr > ())); }
#line 2848 "parser.cpp"
    break;

  case 170: // expr_function: file "::" name
#line 617 "parser.ypp"
        { yylhs.value.as < node_ptr > () = std::make_unique<node_expr_function>(yylhs.location, std::move(yystack_[2].value.as < file_ptr > ()), std::move(yystack_[0].value.as < name_ptr > ())); }
#line 2854 "parser.cpp"
    break;

  case 171: // expr_add_array: "[" expr_arguments_filled "]"
#line 622 "parser.ypp"
        { yylhs.value.as < node_ptr > () = std::make_unique<node_expr_add_array>(yylhs.location, std::move(yystack_[1].value.as < expr_arguments_ptr > ())); }
#line 2860 "parser.cpp"
    break;

  case 172: // expr_array: object "[" expr "]"
#line 627 "parser.ypp"
        { yylhs.value.as < node_ptr > () = std::make_unique<node_expr_array>(yylhs.location, std::move(yystack_[3].value.as < node_ptr > ()), std::move(yystack_[1].value.as < expr_ptr > ())); }
#line 2866 "parser.cpp"
    break;

  case 173: // expr_field: object "." name
#line 632 "parser.ypp"
        { yylhs.value.as < node_ptr > () = std::make_unique<node_expr_field>(yylhs.location, std::move(yystack_[2].value.as < node_ptr > ()), std::move(yystack_[0].value.as < name_ptr > ())); }
#line 2872 "parser.cpp"
    break;

  case 174: // expr_size: object ".size"
#line 637 "parser.ypp"
        { yylhs.value.as < node_ptr > () = std::make_unique<node_expr_size>(yylhs.location, std::move(yystack_[1].value.as < node_ptr > ())); }
#line 2878 "parser.cpp"
    break;

  case 175: // object: expr_call
#line 641 "parser.ypp"
                                                       { yylhs.value.as < node_ptr > () = std::move(yystack_[0].value.as < expr_call_ptr > ()); }
#line 2884 "parser.cpp"
    break;

  case 176: // object: expr_array
#line 642 "parser.ypp"
                                                       { yylhs.value.as < node_ptr > () = std::move(yystack_[0].value.as < node_ptr > ()); }
#line 2890 "parser.cpp"
    break;

  case 177: // object: expr_field
#line 643 "parser.ypp"
                                                       { yylhs.value.as < node_ptr > () = std::move(yystack_[0].value.as < node_ptr > ()); }
#line 2896 "parser.cpp"
    break;

  case 178: // object: game
#line 644 "parser.ypp"
                                                       { yylhs.value.as < node_ptr > () = std::move(yystack_[0].value.as < game_ptr > ()); }
#line 2902 "parser.cpp"
    break;

  case 179: // object: self
#line 645 "parser.ypp"
                                                       { yylhs.value.as < node_ptr > () = std::move(yystack_[0].value.as < self_ptr > ()); }
#line 2908 "parser.cpp"
    break;

  case 180: // object: anim
#line 646 "parser.ypp"
                                                       { yylhs.value.as < node_ptr > () = std::move(yystack_[0].value.as < anim_ptr > ()); }
#line 2914 "parser.cpp"
    break;

  case 181: // object: level
#line 647 "parser.ypp"
                                                       { yylhs.value.as < node_ptr > () = std::move(yystack_[0].value.as < level_ptr > ()); }
#line 2920 "parser.cpp"
    break;

  case 182: // object: name
#line 648 "parser.ypp"
                                                       { yylhs.value.as < node_ptr > () = std::move(yystack_[0].value.as < name_ptr > ()); }
#line 2926 "parser.cpp"
    break;

  case 183: // float: "-" "float"
#line 652 "parser.ypp"
                                                       { yylhs.value.as < float_ptr > () = std::make_unique<node_float>(yylhs.location, "-" + yystack_[0].value.as < std::string > ()); }
#line 2932 "parser.cpp"
    break;

  case 184: // float: "float"
#line 653 "parser.ypp"
                                                       { yylhs.value.as < float_ptr > () = std::make_unique<node_float>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 2938 "parser.cpp"
    break;

  case 185: // integer: "-" "int"
#line 657 "parser.ypp"
                                                       { yylhs.value.as < integer_ptr > () = std::make_unique<node_integer>(yylhs.location, "-" + yystack_[0].value.as < std::string > ()); }
#line 2944 "parser.cpp"
    break;

  case 186: // integer: "int"
#line 658 "parser.ypp"
                                                       { yylhs.value.as < integer_ptr > () = std::make_unique<node_integer>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 2950 "parser.cpp"
    break;

  case 187: // integer: "octal int"
#line 659 "parser.ypp"
                                                       { yylhs.value.as < integer_ptr > () = std::make_unique<node_integer>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 2956 "parser.cpp"
    break;

  case 188: // integer: "binary int"
#line 660 "parser.ypp"
                                                       { yylhs.value.as < integer_ptr > () = std::make_unique<node_integer>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 2962 "parser.cpp"
    break;

  case 189: // integer: "hexadecimal int"
#line 661 "parser.ypp"
                                                       { yylhs.value.as < integer_ptr > () = std::make_unique<node_integer>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 2968 "parser.cpp"
    break;

  case 190: // thisthread: "thisthread"
#line 664 "parser.ypp"
                                                       { yylhs.value.as < thisthread_ptr > () = std::make_unique<node_thisthread>(yylhs.location); }
#line 2974 "parser.cpp"
    break;

  case 191: // empty_array: "[" "]"
#line 665 "parser.ypp"
                                                       { yylhs.value.as < empty_array_ptr > () = std::make_unique<node_empty_array>(yylhs.location); }
#line 2980 "parser.cpp"
    break;

  case 192: // undefined: "undefined"
#line 666 "parser.ypp"
                                                       { yylhs.value.as < undefined_ptr > () = std::make_unique<node_undefined>(yylhs.location); }
#line 2986 "parser.cpp"
    break;

  case 193: // game: "game"
#line 667 "parser.ypp"
                                                       { yylhs.value.as < game_ptr > () = std::make_unique<node_game>(yylhs.location); }
#line 2992 "parser.cpp"
    break;

  case 194: // self: "self"
#line 668 "parser.ypp"
                                                       { yylhs.value.as < self_ptr > () = std::make_unique<node_self>(yylhs.location); }
#line 2998 "parser.cpp"
    break;

  case 195: // anim: "anim"
#line 669 "parser.ypp"
                                                       { yylhs.value.as < anim_ptr > () = std::make_unique<node_anim>(yylhs.location); }
#line 3004 "parser.cpp"
    break;

  case 196: // level: "level"
#line 670 "parser.ypp"
                                                       { yylhs.value.as < level_ptr > () = std::make_unique<node_level>(yylhs.location); }
#line 3010 "parser.cpp"
    break;

  case 197: // animation: "%" "identifier"
#line 671 "parser.ypp"
                                                       { yylhs.value.as < animation_ptr > () = std::make_unique<node_animation>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3016 "parser.cpp"
    break;

  case 198: // animtree: "#animtree"
#line 672 "parser.ypp"
                                                       { yylhs.value.as < animtree_ptr > () = std::make_unique<node_animtree>(yylhs.location); }
#line 3022 "parser.cpp"
    break;

  case 199: // name: "identifier"
#line 673 "parser.ypp"
                                                       { yylhs.value.as < name_ptr > () = std::make_unique<node_name>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3028 "parser.cpp"
    break;

  case 200: // file: "file path"
#line 674 "parser.ypp"
                                                       { yylhs.value.as < file_ptr > () = std::make_unique<node_file>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3034 "parser.cpp"
    break;

  case 201: // istring: "localized string"
#line 675 "parser.ypp"
                                                       { yylhs.value.as < istring_ptr > () = std::make_unique<node_istring>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3040 "parser.cpp"
    break;

  case 202: // string: "string literal"
#line 676 "parser.ypp"
                                                       { yylhs.value.as < string_ptr > () = std::make_unique<node_string>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3046 "parser.cpp"
    break;

  case 203: // color: "color"
#line 677 "parser.ypp"
                                                       { yylhs.value.as < color_ptr > () = std::make_unique<node_color>(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3052 "parser.cpp"
    break;

  case 204: // vector: "(" expr "," expr "," expr ")"
#line 678 "parser.ypp"
                                                       { yylhs.value.as < vector_ptr > () = std::make_unique<node_vector>(yylhs.location, std::move(yystack_[5].value.as < expr_ptr > ()), std::move(yystack_[3].value.as < expr_ptr > ()), std::move(yystack_[1].value.as < expr_ptr > ())); }
#line 3058 "parser.cpp"
    break;

  case 205: // false: "false"
#line 679 "parser.ypp"
                                                       { yylhs.value.as < false_ptr > () = std::make_unique<node_false>(yylhs.location); }
#line 3064 "parser.cpp"
    break;

  case 206: // true: "true"
#line 680 "parser.ypp"
                                                       { yylhs.value.as < true_ptr > () = std::make_unique<node_true>(yylhs.location); }
#line 3070 "parser.cpp"
    break;


#line 3074 "parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      yy_lac_discard_ ("error recovery");
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  const char *
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    static const char *const yy_sname[] =
    {
    "end of file", "error", "invalid token", "breakpoint", "prof_begin",
  "prof_end", "#include", "#using_animtree", "#animtree", "endon",
  "notify", "wait", "waittill", "waittillmatch", "waittillframeend",
  "waitframe", "if", "else", "while", "for", "foreach", "in", "switch",
  "case", "default", "break", "continue", "return", "thread",
  "childthread", "thisthread", "call", "true", "false", "undefined",
  ".size", "game", "self", "anim", "level", "(", ")", "{", "}", "[", "]",
  ",", ".", "::", ":", ";", "?", "++", "--", "<<", ">>", "||", "&&", "==",
  "!=", "<=", ">=", "<", ">", "!", "~", "=", "+=", "-=", "*=", "/=", "%=",
  "|=", "&=", "^=", ">>=", "<<=", "|", "&", "^", "+", "-", "*", "/", "%",
  "file path", "identifier", "string literal", "localized string", "color",
  "float", "int", "octal int", "binary int", "hexadecimal int",
  "ADD_ARRAY", "THEN", "TERN", "NEG", "ANIMREF", "PREINC", "PREDEC",
  "POSTINC", "POSTDEC", "$accept", "root", "program", "include", "define",
  "usingtree", "constant", "thread", "parameters", "stmt", "stmt_block",
  "stmt_list", "stmt_call", "stmt_assign", "stmt_endon", "stmt_notify",
  "stmt_wait", "stmt_waittill", "stmt_waittillmatch",
  "stmt_waittillframeend", "stmt_waitframe", "stmt_if", "stmt_ifelse",
  "stmt_while", "stmt_for", "stmt_foreach", "stmt_switch", "stmt_case",
  "stmt_default", "stmt_break", "stmt_continue", "stmt_return",
  "stmt_breakpoint", "stmt_prof_begin", "stmt_prof_end", "for_stmt",
  "for_expr", "expr", "expr_assign", "expr_compare", "expr_ternary",
  "expr_binary", "expr_primitive", "expr_call", "expr_call_thread",
  "expr_call_childthread", "expr_call_function", "expr_call_pointer",
  "expr_arguments", "expr_arguments_filled", "expr_arguments_empty",
  "expr_function", "expr_add_array", "expr_array", "expr_field",
  "expr_size", "object", "float", "integer", "thisthread", "empty_array",
  "undefined", "game", "self", "anim", "level", "animation", "animtree",
  "name", "file", "istring", "string", "color", "vector", "false", "true", YY_NULLPTR
    };
    return yy_sname[yysymbol];
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

#if S2DEBUG
    // Execute LAC once. We don't care if it is successful, we
    // only do it for the sake of debugging output.
    if (!yyparser_.yy_lac_established_)
      yyparser_.yy_lac_check_ (yyla_.kind ());
#endif

    for (int yyx = 0; yyx < YYNTOKENS; ++yyx)
      {
        symbol_kind_type yysym = YY_CAST (symbol_kind_type, yyx);
        if (yysym != symbol_kind::S_YYerror
            && yysym != symbol_kind::S_YYUNDEF
            && yyparser_.yy_lac_check_ (yysym))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
      }
    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }


  bool
  parser::yy_lac_check_ (symbol_kind_type yytoken) const
  {
    // Logically, the yylac_stack's lifetime is confined to this function.
    // Clear it, to get rid of potential left-overs from previous call.
    yylac_stack_.clear ();
    // Reduce until we encounter a shift and thereby accept the token.
#if S2DEBUG
    YYCDEBUG << "LAC: checking lookahead " << symbol_name (yytoken) << ':';
#endif
    std::ptrdiff_t lac_top = 0;
    while (true)
      {
        state_type top_state = (yylac_stack_.empty ()
                                ? yystack_[lac_top].state
                                : yylac_stack_.back ());
        int yyrule = yypact_[+top_state];
        if (yy_pact_value_is_default_ (yyrule)
            || (yyrule += yytoken) < 0 || yylast_ < yyrule
            || yycheck_[yyrule] != yytoken)
          {
            // Use the default action.
            yyrule = yydefact_[+top_state];
            if (yyrule == 0)
              {
                YYCDEBUG << " Err\n";
                return false;
              }
          }
        else
          {
            // Use the action from yytable.
            yyrule = yytable_[yyrule];
            if (yy_table_value_is_error_ (yyrule))
              {
                YYCDEBUG << " Err\n";
                return false;
              }
            if (0 < yyrule)
              {
                YYCDEBUG << " S" << yyrule << '\n';
                return true;
              }
            yyrule = -yyrule;
          }
        // By now we know we have to simulate a reduce.
        YYCDEBUG << " R" << yyrule - 1;
        // Pop the corresponding number of values from the stack.
        {
          std::ptrdiff_t yylen = yyr2_[yyrule];
          // First pop from the LAC stack as many tokens as possible.
          std::ptrdiff_t lac_size = std::ptrdiff_t (yylac_stack_.size ());
          if (yylen < lac_size)
            {
              yylac_stack_.resize (std::size_t (lac_size - yylen));
              yylen = 0;
            }
          else if (lac_size)
            {
              yylac_stack_.clear ();
              yylen -= lac_size;
            }
          // Only afterwards look at the main stack.
          // We simulate popping elements by incrementing lac_top.
          lac_top += yylen;
        }
        // Keep top_state in sync with the updated stack.
        top_state = (yylac_stack_.empty ()
                     ? yystack_[lac_top].state
                     : yylac_stack_.back ());
        // Push the resulting state of the reduction.
        state_type state = yy_lr_goto_state_ (top_state, yyr1_[yyrule]);
        YYCDEBUG << " G" << int (state);
        yylac_stack_.push_back (state);
      }
  }

  // Establish the initial context if no initial context currently exists.
  bool
  parser::yy_lac_establish_ (symbol_kind_type yytoken)
  {
    /* Establish the initial context for the current lookahead if no initial
       context is currently established.

       We define a context as a snapshot of the parser stacks.  We define
       the initial context for a lookahead as the context in which the
       parser initially examines that lookahead in order to select a
       syntactic action.  Thus, if the lookahead eventually proves
       syntactically unacceptable (possibly in a later context reached via a
       series of reductions), the initial context can be used to determine
       the exact set of tokens that would be syntactically acceptable in the
       lookahead's place.  Moreover, it is the context after which any
       further semantic actions would be erroneous because they would be
       determined by a syntactically unacceptable token.

       yy_lac_establish_ should be invoked when a reduction is about to be
       performed in an inconsistent state (which, for the purposes of LAC,
       includes consistent states that don't know they're consistent because
       their default reductions have been disabled).

       For parse.lac=full, the implementation of yy_lac_establish_ is as
       follows.  If no initial context is currently established for the
       current lookahead, then check if that lookahead can eventually be
       shifted if syntactic actions continue from the current context.  */
    if (!yy_lac_established_)
      {
#if S2DEBUG
        YYCDEBUG << "LAC: initial context established for "
                 << symbol_name (yytoken) << '\n';
#endif
        yy_lac_established_ = true;
        return yy_lac_check_ (yytoken);
      }
    return true;
  }

  // Discard any previous initial lookahead context.
  void
  parser::yy_lac_discard_ (const char* evt)
  {
   /* Discard any previous initial lookahead context because of Event,
      which may be a lookahead change or an invalidation of the currently
      established initial context for the current lookahead.

      The most common example of a lookahead change is a shift.  An example
      of both cases is syntax error recovery.  That is, a syntax error
      occurs when the lookahead is syntactically erroneous for the
      currently established initial context, so error recovery manipulates
      the parser stacks to try to find a new initial context in which the
      current lookahead is syntactically acceptable.  If it fails to find
      such a context, it discards the lookahead.  */
    if (yy_lac_established_)
      {
        YYCDEBUG << "LAC: initial context discarded due to "
                 << evt << '\n';
        yy_lac_established_ = false;
      }
  }

  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
         In the first two cases, it might appear that the current syntax
         error should have been detected in the previous state when
         yy_lac_check was invoked.  However, at that time, there might
         have been a different syntax error that discarded a different
         initial context during error recovery, leaving behind the
         current lookahead.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short parser::yypact_ninf_ = -244;

  const short parser::yytable_ninf_ = -183;

  const short
  parser::yypact_[] =
  {
       3,   -71,   -24,  -244,    30,     3,  -244,  -244,  -244,  -244,
    -244,   -23,  -244,   -29,   -54,  -244,  -244,  -244,   -49,   648,
    -244,  -244,    -1,   -21,  -244,  -244,   -16,   -16,  -244,    12,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,   648,   514,   -49,
     648,   648,    10,   -37,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  1603,  -244,  -244,  -244,  -244,     7,  -244,  -244,  -244,
    -244,  -244,  -244,   383,   604,  -244,   671,  -244,  -244,  -244,
    -244,  -244,   916,   924,   941,   946,  -244,  -244,    17,    26,
    -244,  -244,  -244,  -244,  -244,  -244,    25,    11,   -49,    33,
    -244,  -244,    45,    35,  -244,  -244,    53,  1003,   514,  -244,
    1686,    52,    42,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,   648,   648,   648,   648,   648,   648,   648,   648,   648,
     648,   648,   648,   648,   648,   648,   648,   648,   648,   648,
     -16,   -16,  -244,   715,   -49,  -244,  -244,   648,   -49,  -244,
     807,  -244,  -244,   648,   -49,   648,  -244,   648,  1413,   648,
    -244,  1568,   231,   231,  1717,  1727,   710,   710,    41,    41,
      41,    41,  1758,  1799,  1768,    44,    44,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  1453,  -244,   -17,  -244,    69,    57,
      70,    74,   648,    79,   -27,    77,    92,    93,    99,   101,
     342,    94,    96,    97,   581,  -244,   683,   683,  -244,  -244,
     852,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,   119,   120,   121,  -244,  -244,   430,
    -244,  -244,  -244,  -244,    45,  1413,    69,  1493,  1532,   104,
    1686,   648,  -244,  -244,   648,  -244,   648,   648,  1638,  -244,
     135,  -244,   648,   648,   442,   -49,   648,    51,   128,   130,
    -244,  -244,  -244,  -244,  1673,  -244,   175,   175,  -244,  -244,
    -244,  -244,  -244,   141,   145,   147,   149,  -244,  -244,   648,
     648,   648,   648,   648,   648,   648,   648,   648,   648,   648,
     150,   648,   152,  1686,     9,    19,    21,  -244,   140,  1169,
    1203,   148,  -244,   967,    -2,  1237,  -244,  -244,  -244,   648,
     648,   648,   648,  1686,  1686,  1686,  1686,  1686,  1686,  1686,
    1686,  1686,  1686,  1686,   159,  1271,   648,  -244,   153,   157,
    -244,   897,   897,   648,   648,   -49,    11,  1305,  1047,  1091,
    1135,   648,  -244,    22,  -244,  -244,   191,  -244,   161,  1686,
    1339,   188,  -244,   162,   166,   648,   167,   648,   168,   648,
      32,  -244,   897,   442,   897,   648,  -244,  -244,    40,  -244,
      58,  -244,    67,  -244,  -244,   179,  -244,  1373,   173,   174,
     177,   897,   897,  -244,  -244,  -244,  -244,  -244
  };

  const unsigned char
  parser::yydefact_[] =
  {
       3,     0,     0,   199,     0,     2,     6,     7,     9,    10,
      11,     0,   200,     0,     0,     1,     4,     5,    17,     0,
       8,   202,     0,     0,    16,   198,     0,     0,   190,     0,
     206,   205,   192,   193,   194,   195,   196,     0,   168,     0,
       0,     0,     0,     0,   201,   203,   184,   186,   187,   188,
     189,     0,    81,    82,    83,    84,   122,   123,   124,   148,
     149,   125,   126,   127,   128,   129,     0,   144,   145,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,     0,
     140,   141,   142,   143,   146,   147,     0,     0,     0,     0,
     152,   153,     0,     0,   156,   157,     0,     0,   168,   191,
     167,     0,   164,   165,   169,   121,   120,   183,   185,   197,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   174,     0,     0,   150,   151,   168,     0,    12,
       0,    14,    15,     0,     0,     0,   119,     0,   167,     0,
     171,     0,   112,   113,   100,   101,   102,   103,   104,   105,
     106,   107,   109,   110,   111,   114,   115,   116,   117,   118,
     154,   155,   158,   159,     0,   173,     0,   164,   170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,    45,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,   175,     0,   176,   177,     0,
     178,   179,   180,   181,   182,     0,     0,     0,     0,     0,
     166,     0,   172,   160,   168,    74,   168,   168,     0,    57,
       0,    58,     0,     0,    78,     0,     0,     0,     0,     0,
      69,    70,    71,    73,     0,   175,    85,    86,    42,    44,
      48,    46,    47,     0,     0,     0,     0,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,     0,     0,    52,     0,     0,
       0,     0,    77,     0,     0,     0,    67,    68,    72,     0,
       0,     0,     0,    89,    95,    96,    97,    98,    99,    90,
      91,    92,    94,    93,     0,     0,   168,   161,     0,     0,
      59,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,   168,   204,     0,    75,    76,    60,    62,     0,    79,
       0,     0,    66,     0,     0,   168,     0,   168,     0,   168,
       0,   162,     0,    78,     0,     0,    49,    51,     0,    54,
       0,    56,     0,   163,    61,     0,    64,     0,     0,     0,
       0,     0,     0,    50,    53,    55,    63,    65
  };

  const short
  parser::yypgoto_[] =
  {
    -244,  -244,  -244,   223,   226,  -244,  -244,  -244,  -244,    15,
     -84,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -128,  -244,    39,  -243,  -244,
    -244,  -244,  -244,  -106,  -118,  -244,   -25,   -19,   -53,   -26,
    -244,  -244,  -244,   -81,   -22,  -244,    43,  -244,    46,  -244,
    -244,  -244,    90,   156,   193,   203,  -244,  -244,     0,     5,
    -244,   -10,  -244,  -244,  -244,  -244
  };

  const short
  parser::yydefgoto_[] =
  {
       0,     4,     5,     6,     7,     8,     9,    10,    23,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   301,   348,   100,   224,    52,
      53,    54,    55,    56,    57,    58,    59,    60,   101,   177,
     103,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85
  };

  const short
  parser::yytable_[] =
  {
      11,    90,    94,   141,    22,    11,    13,    91,    95,     1,
       2,   302,   102,   250,    12,    29,    14,    18,    24,   334,
      87,    20,   226,   251,   243,    88,    92,    92,    89,   149,
      15,    93,    93,    21,   225,  -175,  -175,     3,  -175,   104,
      86,   135,  -175,    19,   335,  -182,  -182,   136,  -182,   109,
     327,  -175,  -182,   140,  -175,   149,    96,   137,    51,   227,
     328,  -182,   329,   361,  -182,   149,    92,   149,   149,    12,
       3,    93,   102,   373,   138,   139,    97,   143,   149,   105,
     106,   378,   226,   144,   176,   137,   149,   150,   142,     3,
     265,   265,  -175,  -175,   225,   112,   113,   145,   149,   379,
     107,   108,  -182,  -182,   149,   170,   172,   245,   380,   244,
     246,   171,   173,   149,   247,   227,   227,   252,   228,   227,
     302,   125,   126,   127,   128,   129,   127,   128,   129,   249,
      92,    92,   253,   254,   175,    93,    93,   148,   178,   255,
     234,   256,   108,   260,   236,    93,   261,   262,   265,   292,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   270,
     271,   272,   174,   227,   228,   228,   298,   306,   228,   307,
     259,   309,   235,   229,   237,   310,   238,   311,   240,   312,
     330,   294,   326,   295,   296,   324,   234,   234,   333,   341,
     234,    93,    93,   344,   135,    93,    29,   345,   362,   365,
     136,   363,   366,   226,   226,   269,   367,   369,   371,   133,
     381,   248,   134,   383,   384,   225,   225,   385,    16,    92,
     230,    17,   228,   264,    93,   375,   258,     0,     0,   266,
     267,   135,   135,   229,   226,     0,   226,   136,   136,     0,
     227,   227,   352,     0,   234,   304,   225,   265,   225,    93,
      12,     3,     0,   226,   226,     0,    92,    92,     0,     0,
       0,    93,    93,   343,     0,   225,   225,     0,   135,     0,
     293,   227,   227,   227,   136,     0,   230,   230,   360,     0,
     230,   299,   300,     0,     0,   305,   231,   303,     0,     0,
     227,   227,   368,    92,   370,     0,   372,     0,    93,   228,
     228,   125,   126,   127,   128,   129,     0,     0,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,     0,
     325,   234,   234,   232,     0,   351,    93,    93,     0,     0,
     228,   228,   228,   233,   230,     0,   346,   347,   337,   338,
     339,   340,   231,   231,     0,     0,   231,     0,     0,   228,
     228,     0,   234,   234,   234,     0,     0,    93,    93,    93,
       0,     0,   349,   350,   229,   229,     0,   374,     0,   376,
       0,   234,   234,     0,     0,     0,    93,    93,     0,   232,
     232,     0,     0,   232,     0,     0,   386,   387,     0,   233,
     233,     0,     0,   233,   377,   229,   303,   229,     0,     0,
     231,  -176,  -176,     0,  -176,     0,     0,     0,  -176,     0,
       0,   230,   230,   257,   229,   229,     0,  -176,     0,    21,
    -176,     0,     0,    47,    48,    49,    50,     0,     0,   273,
     274,     0,   275,   276,     0,     0,     0,   232,     0,     0,
       0,     0,   230,   230,   230,     0,     0,   233,   130,     0,
       0,    29,     0,     0,     0,     0,     0,     0,  -176,  -176,
       0,   230,   230,    29,   133,     0,     0,   134,    33,    34,
      35,    36,   277,   278,     0,     0,    89,   231,   231,     0,
       0,     0,     0,     0,   196,   197,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     3,     0,   231,   231,
     231,     0,    25,     0,   232,   232,     0,    12,     3,     0,
       0,     0,     0,     0,   233,   233,     0,   231,   231,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,     0,
      33,    34,    35,    36,    37,   232,   232,   232,    98,    99,
       0,     0,    39,     0,     0,   233,   233,   233,     0,     0,
       0,     0,     0,     0,   232,   232,     0,     0,    40,    41,
       0,     0,     0,     0,   233,   233,     0,     0,     0,    25,
       0,     0,     0,     0,     0,    42,     0,     0,    43,    12,
       3,    21,    44,    45,    46,    47,    48,    49,    50,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,     0,     0,     0,    38,     0,     0,     0,    39,
       0,   263,  -177,  -177,     0,  -177,     0,     0,     0,  -177,
       0,     0,     0,     0,     0,    40,    41,     0,  -177,     0,
       0,  -177,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,    42,     0,     0,    43,    12,     3,    21,    44,
      45,    46,    47,    48,    49,    50,    26,    27,    28,    29,
      30,    31,    32,     0,    33,    34,    35,    36,    37,  -177,
    -177,     0,    38,     0,     0,     0,    39,     0,     0,   130,
     131,     0,    29,     0,     0,     0,   132,     0,     0,     0,
       0,     0,    40,    41,    29,   133,     0,     0,   134,    33,
      34,    35,    36,    25,     0,     0,     0,    89,     0,    42,
       0,     0,    43,    12,     3,    21,    44,    45,    46,    47,
      48,    49,    50,    26,    27,    28,    29,    30,    31,    32,
       0,    33,    34,    35,    36,    37,    12,     3,     0,    98,
       0,     0,     0,    39,   112,   113,     0,     0,    12,     3,
     118,   119,   120,   121,     0,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,     0,    42,     0,     0,    43,
      12,     3,    21,    44,    45,    46,    47,    48,    49,    50,
     179,   180,   181,     0,     0,     0,     0,     0,   182,     0,
       0,   183,   184,   185,     0,   186,   187,   188,     0,   189,
     190,   191,   192,   193,   194,    26,     0,     0,    29,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,   140,
     195,    89,     0,     0,     0,   179,   180,   181,     0,   196,
     197,     0,     0,   182,     0,     0,   183,   184,   185,     0,
     186,   187,   188,     0,   189,   190,   191,   192,   193,   194,
      26,     0,     0,    29,     0,     0,     0,     0,    33,    34,
      35,    36,    12,     3,   140,   268,    89,     0,     0,     0,
     179,   180,   181,     0,   196,   197,     0,     0,   182,     0,
       0,   183,   184,   185,     0,   186,   187,   188,     0,   189,
     190,   191,   192,   193,   194,    26,     0,     0,    29,     0,
       0,     0,     0,    33,    34,    35,    36,    12,     3,   140,
       0,    89,     0,     0,  -178,  -178,     0,  -178,     0,   196,
     197,  -178,  -179,  -179,     0,  -179,     0,     0,     0,  -179,
    -178,     0,     0,  -178,     0,     0,     0,     0,  -179,  -180,
    -180,  -179,  -180,     0,  -181,  -181,  -180,  -181,     0,     0,
       0,  -181,    12,     3,     0,  -180,     0,     0,  -180,     0,
    -181,     0,     0,  -181,     0,     0,     0,     0,    29,     0,
       0,  -178,  -178,     0,     0,     0,     0,     0,     0,  -179,
    -179,   133,     0,     0,   134,     0,     0,     0,     0,   277,
     278,     0,     0,     0,     0,     0,  -180,  -180,     0,     0,
       0,  -181,  -181,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   146,     0,     0,     0,     0,   147,
       0,     0,    12,     3,   111,     0,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   354,     0,
       0,     0,     0,   355,     0,     0,     0,     0,   111,     0,
       0,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   356,     0,     0,     0,     0,   357,     0,     0,
       0,     0,   111,     0,     0,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   358,     0,     0,     0,
       0,   359,     0,     0,     0,     0,   111,     0,     0,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     331,     0,   122,   123,   124,   125,   126,   127,   128,   129,
     111,     0,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   332,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   111,     0,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   336,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   111,     0,
       0,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   342,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   111,     0,     0,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   353,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   111,     0,     0,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     364,     0,   122,   123,   124,   125,   126,   127,   128,   129,
     111,     0,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   382,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   111,     0,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   239,     0,
       0,     0,     0,     0,   111,     0,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   242,     0,
       0,     0,     0,     0,   111,     0,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   290,     0,
       0,     0,     0,     0,   111,     0,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   291,     0,
       0,     0,     0,   111,     0,     0,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   241,     0,   111,
       0,     0,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   110,   111,     0,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   297,   111,
       0,     0,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   308,   111,     0,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   111,     0,     0,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,     0,     0,
       0,     0,     0,   122,   123,   124,   125,   126,   127,   128,
     129,   112,   113,     0,   115,   116,   117,   118,   119,   120,
     121,   112,   113,     0,     0,   116,   117,   118,   119,   120,
     121,     0,     0,     0,   122,   123,   124,   125,   126,   127,
     128,   129,     0,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   112,   113,     0,     0,   116,   117,   118,   119,
     120,   121,   112,   113,     0,     0,   116,   117,   118,   119,
     120,   121,     0,     0,     0,     0,   123,   124,   125,   126,
     127,   128,   129,     0,     0,     0,   123,     0,   125,   126,
     127,   128,   129,   112,   113,     0,     0,   116,   117,   118,
     119,   120,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,   128,   129
  };

  const short
  parser::yycheck_[] =
  {
       0,    26,    27,    87,    14,     5,     1,    26,    27,     6,
       7,   254,    38,    40,    85,    31,    40,    40,    18,    21,
      41,    50,   140,    50,    41,    46,    26,    27,    44,    46,
       0,    26,    27,    87,   140,    28,    29,    86,    31,    39,
      41,    66,    35,    66,    46,    28,    29,    66,    31,    86,
      41,    44,    35,    42,    47,    46,    44,    40,    19,   140,
      41,    44,    41,    41,    47,    46,    66,    46,    46,    85,
      86,    66,    98,    41,    48,    50,    37,    44,    46,    40,
      41,    41,   200,    48,   137,    40,    46,    45,    88,    86,
     196,   197,    85,    86,   200,    54,    55,    44,    46,    41,
      90,    91,    85,    86,    46,   130,   131,    50,    41,    40,
      40,   130,   131,    46,    40,   196,   197,    40,   140,   200,
     363,    80,    81,    82,    83,    84,    82,    83,    84,    50,
     130,   131,    40,    40,   134,   130,   131,    98,   138,    40,
     140,    40,    91,    49,   144,   140,    50,    50,   254,    45,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    50,
      50,    50,   133,   254,   196,   197,    41,    49,   200,    49,
     190,    40,   143,   140,   145,    40,   147,    40,   149,    40,
      50,   244,    40,   246,   247,    45,   196,   197,    50,    40,
     200,   196,   197,    50,   229,   200,    31,    50,    17,    21,
     229,    50,    50,   331,   332,   200,    50,    50,    50,    44,
      41,   182,    47,    50,    50,   331,   332,    50,     5,   229,
     140,     5,   254,   194,   229,   363,   190,    -1,    -1,   196,
     197,   266,   267,   200,   362,    -1,   364,   266,   267,    -1,
     331,   332,   336,    -1,   254,   255,   362,   363,   364,   254,
      85,    86,    -1,   381,   382,    -1,   266,   267,    -1,    -1,
      -1,   266,   267,   326,    -1,   381,   382,    -1,   303,    -1,
     241,   362,   363,   364,   303,    -1,   196,   197,   341,    -1,
     200,   252,   253,    -1,    -1,   256,   140,   254,    -1,    -1,
     381,   382,   355,   303,   357,    -1,   359,    -1,   303,   331,
     332,    80,    81,    82,    83,    84,    -1,    -1,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,    -1,
     291,   331,   332,   140,    -1,   335,   331,   332,    -1,    -1,
     362,   363,   364,   140,   254,    -1,   331,   332,   309,   310,
     311,   312,   196,   197,    -1,    -1,   200,    -1,    -1,   381,
     382,    -1,   362,   363,   364,    -1,    -1,   362,   363,   364,
      -1,    -1,   333,   334,   331,   332,    -1,   362,    -1,   364,
      -1,   381,   382,    -1,    -1,    -1,   381,   382,    -1,   196,
     197,    -1,    -1,   200,    -1,    -1,   381,   382,    -1,   196,
     197,    -1,    -1,   200,   365,   362,   363,   364,    -1,    -1,
     254,    28,    29,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,   331,   332,    81,   381,   382,    -1,    44,    -1,    87,
      47,    -1,    -1,    91,    92,    93,    94,    -1,    -1,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,   362,   363,   364,    -1,    -1,   254,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      -1,   381,   382,    31,    44,    -1,    -1,    47,    36,    37,
      38,    39,    52,    53,    -1,    -1,    44,   331,   332,    -1,
      -1,    -1,    -1,    -1,    52,    53,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,   362,   363,
     364,    -1,     8,    -1,   331,   332,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,   331,   332,    -1,   381,   382,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,   362,   363,   364,    44,    45,
      -1,    -1,    48,    -1,    -1,   362,   363,   364,    -1,    -1,
      -1,    -1,    -1,    -1,   381,   382,    -1,    -1,    64,    65,
      -1,    -1,    -1,    -1,   381,   382,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,
      -1,    50,    28,    29,    -1,    31,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    85,
      86,    -1,    44,    -1,    -1,    -1,    48,    -1,    -1,    28,
      29,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    64,    65,    31,    44,    -1,    -1,    47,    36,
      37,    38,    39,     8,    -1,    -1,    -1,    44,    -1,    81,
      -1,    -1,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    85,    86,    -1,    44,
      -1,    -1,    -1,    48,    54,    55,    -1,    -1,    85,    86,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,    -1,    -1,    -1,     3,     4,     5,    -1,    52,
      53,    -1,    -1,    11,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    85,    86,    42,    43,    44,    -1,    -1,    -1,
       3,     4,     5,    -1,    52,    53,    -1,    -1,    11,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    85,    86,    42,
      -1,    44,    -1,    -1,    28,    29,    -1,    31,    -1,    52,
      53,    35,    28,    29,    -1,    31,    -1,    -1,    -1,    35,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    44,    28,
      29,    47,    31,    -1,    28,    29,    35,    31,    -1,    -1,
      -1,    35,    85,    86,    -1,    44,    -1,    -1,    47,    -1,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,
      -1,    85,    86,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    41,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    85,    86,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    41,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      51,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    51,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      51,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    46,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    49,    -1,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,
      82,    83,    84,    50,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    50,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,
      82,    83,    84,    50,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    51,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      77,    78,    79,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    54,    55,    -1,    -1,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    54,    55,    -1,    -1,    58,    59,    60,    61,
      62,    63,    54,    55,    -1,    -1,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    78,    -1,    80,    81,
      82,    83,    84,    54,    55,    -1,    -1,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,     6,     7,    86,   105,   106,   107,   108,   109,   110,
     111,   172,    85,   173,    40,     0,   107,   108,    40,    66,
      50,    87,   175,   112,   172,     8,    28,    29,    30,    31,
      32,    33,    34,    36,    37,    38,    39,    40,    44,    48,
      64,    65,    81,    84,    88,    89,    90,    91,    92,    93,
      94,   141,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,    41,    41,    46,    44,
     150,   151,   172,   173,   150,   151,    44,   141,    44,    45,
     141,   152,   153,   154,   172,   141,   141,    90,    91,    86,
      50,    51,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    77,    78,    79,    80,    81,    82,    83,    84,
      28,    29,    35,    44,    47,   150,   151,    40,    48,    50,
      42,   114,   172,    44,    48,    44,    41,    46,   141,    46,
      45,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     150,   151,   150,   151,   141,   172,   152,   153,   172,     3,
       4,     5,    11,    14,    15,    16,    18,    19,    20,    22,
      23,    24,    25,    26,    27,    43,    52,    53,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   142,   147,   148,   157,   158,   160,
     166,   167,   168,   169,   172,   141,   172,   141,   141,    45,
     141,    49,    45,    41,    40,    50,    40,    40,   141,    50,
      40,    50,    40,    40,    40,    40,    40,    81,   162,   175,
      49,    50,    50,    50,   141,   147,   160,   160,    43,   113,
      50,    50,    50,     9,    10,    12,    13,    52,    53,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      45,    46,    45,   141,   152,   152,   152,    50,    41,   141,
     141,   139,   142,   160,   172,   141,    49,    49,    50,    40,
      40,    40,    40,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,    45,   141,    40,    41,    41,    41,
      50,    41,    41,    50,    21,    46,    41,   141,   141,   141,
     141,    40,    41,   152,    50,    50,   113,   113,   140,   141,
     141,   172,   114,    41,    41,    46,    41,    46,    41,    46,
     152,    41,    17,    50,    41,    21,    50,    50,   152,    50,
     152,    50,   152,    41,   113,   139,   113,   141,    41,    41,
      41,    41,    41,    50,    50,    50,   113,   113
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,   104,   105,   105,   106,   106,   106,   106,   107,   108,
     108,   108,   109,   110,   111,   112,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   118,
     119,   119,   120,   121,   121,   122,   122,   123,   124,   124,
     125,   126,   127,   128,   129,   129,   130,   131,   131,   132,
     133,   134,   135,   135,   136,   137,   138,   139,   139,   140,
     140,   141,   141,   141,   141,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     143,   143,   143,   143,   143,   143,   143,   143,   144,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   147,   147,
     147,   147,   148,   148,   148,   148,   149,   149,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   155,
     155,   156,   157,   158,   159,   160,   160,   160,   160,   160,
     160,   160,   160,   161,   161,   162,   162,   162,   162,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,     2,     1,     1,     3,     1,
       1,     1,     5,     4,     5,     3,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     2,     1,     2,     2,     2,     6,
       8,     6,     3,     8,     6,     8,     6,     2,     2,     4,
       5,     7,     5,     9,     7,     9,     5,     3,     3,     2,
       2,     2,     3,     2,     2,     5,     5,     1,     0,     1,
       0,     1,     1,     1,     1,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     3,     3,     2,     2,     3,     3,
       4,     6,     8,     9,     1,     1,     3,     1,     0,     2,
       3,     3,     4,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     7,     1,     1
  };




#if S2DEBUG
  const short
  parser::yyrline_[] =
  {
       0,   246,   246,   247,   251,   253,   255,   257,   262,   267,
     268,   269,   273,   278,   283,   288,   290,   293,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   324,   325,   329,   331,   336,   338,   343,   348,
     353,   355,   360,   365,   367,   372,   374,   379,   384,   386,
     391,   396,   401,   406,   411,   413,   418,   423,   425,   430,
     435,   440,   445,   447,   452,   457,   462,   467,   468,   472,
     473,   477,   478,   479,   480,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     502,   503,   504,   505,   506,   507,   508,   509,   513,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   562,   563,
     564,   565,   569,   570,   571,   572,   576,   577,   578,   579,
     583,   585,   590,   592,   597,   598,   602,   604,   610,   614,
     616,   621,   626,   631,   636,   641,   642,   643,   644,   645,
     646,   647,   648,   652,   653,   657,   658,   659,   660,   661,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // S2DEBUG


#line 13 "parser.ypp"
} } } // xsk::gsc::s2
#line 4213 "parser.cpp"

#line 682 "parser.ypp"


void xsk::gsc::s2::parser::error(const xsk::gsc::location& loc, const std::string& msg)
{
    throw xsk::gsc::comp_error(loc, msg);
}
