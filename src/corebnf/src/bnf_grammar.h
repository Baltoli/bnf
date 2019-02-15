#pragma once

#include <bnf/grammar.h>

#define TAO_PEGTL_NAMESPACE bnf_pegtl
#include <tao/pegtl.hpp>

using namespace tao::bnf_pegtl;

namespace bnf {

/**
 * A BNF grammar for this library looks like the following:
 *
 * - A list of production names, separated by arbitrary empty lines.
 */

struct production : 
  seq<
    identifier,
    eol
  > {};

struct empty_line :
  seq<bol, eol> {};

struct grammar_file :
  seq<
    star<
      sor<
        production,
        empty_line
      >
    >,
    eof
  > {};

/**
 * Actions for parsing a grammar using the intrusive style from PEGTL. The
 * parser starts out with a vector of productions
 */

};
