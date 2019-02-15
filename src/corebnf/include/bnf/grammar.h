#pragma once

#include <filesystem>
#include <string>
#include <string_view>

namespace bnf {

/**
 * These classes will be used to generate parser code by walking the tree
 * structure acquired during parsing.
 */

/**
 * One production in a grammar.
 */

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
