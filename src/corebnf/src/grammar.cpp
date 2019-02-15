#include "bnf_grammar.h"

#include <bnf/grammar.h>

namespace fs = std::filesystem;

namespace bnf {

terminal::terminal(std::string val) :
  value_(val)
{
}

std::string const& terminal::value() const noexcept
{
  return value_;
}

grammar::grammar(fs::path path)
{
}

grammar::grammar(std::string_view sv)
{
}

}
