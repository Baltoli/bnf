#include "bnf_grammar.h"

#include <bnf/grammar.h>

namespace fs = std::filesystem;

using namespace tao::bnf_pegtl;

namespace bnf {

grammar::grammar(fs::path path)
{
  auto in = file_input<>(path.string());
  /* auto succ = parse<grammar_file, my_actions>(in); */

  /* if(!succ) { */
  /*   throw 2; */
  /* } */
}

grammar::grammar(std::string_view sv)
{
}

}
