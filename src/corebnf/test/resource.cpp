#include <catch2/catch.hpp>
#include <fmt/format.h>

#include <filesystem>

namespace fs = std::filesystem;

TEST_CASE("resource directory path is defined", "[resources]")
{
#ifdef RESOURCE_DIR
  auto defined = true;
#else
  auto defined = false;
#endif

  REQUIRE(defined);
}

TEST_CASE("resource directory exists", "[resources]")
{
  auto path = fs::path(RESOURCE_DIR);

  REQUIRE(fs::exists(path));
  REQUIRE(fs::is_directory(path));
}
