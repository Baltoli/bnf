#pragma once

#include <filesystem>
#include <string_view>

namespace bnf {

class grammar {
public:
  grammar(std::filesystem::path path);
  grammar(std::string_view sv);
};

}
