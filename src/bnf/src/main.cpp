#include <bnf/bnf.h>

#include <fmt/format.h>

#include <filesystem>

namespace fs = std::filesystem;

int main(int argc, char **argv)
{
  if(argc != 2) {
    fmt::print(stderr, "Usage: {} grammar\n", argv[0]);
    return 1;
  }
  
  auto grammar_path = fs::path(argv[1]);
  if(!fs::exists(grammar_path)) {
    fmt::print(stderr, "Grammar file does not exist: {}\n", grammar_path.string());
    return 2;
  }

  auto grammar = bnf::grammar(grammar_path);
}
