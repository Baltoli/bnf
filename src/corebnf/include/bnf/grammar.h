#pragma once

#include <filesystem>
#include <string>
#include <string_view>

namespace bnf {

/**
 * Represents a terminal symbol in a grammar.
 */
class terminal {
public:
  terminal(std::string val);

  std::string const& value() const noexcept;

private:
  std::string value_;
};

/**
 * Represents a BNF grammar to be converted into parser code.
 */
class grammar {
public:
  /**
   * Load a grammar from a file on disk.
   */
  grammar(std::filesystem::path path);

  /**
   * Load a grammar from a string view in memory.
   */
  grammar(std::string_view sv);
};

}
