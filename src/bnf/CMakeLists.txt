project(bnf VERSION 0.1 LANGUAGES CXX)

add_executable(bnf
  src/main.cpp
)

set_target_properties(bnf PROPERTIES
  CXX_STANDARD 17
)

target_link_libraries(bnf
  corebnf
  stdc++fs
  CONAN_PKG::fmt
  CONAN_PKG::spdlog
  CONAN_PKG::pegtl
)

install(
  TARGETS bnf
  DESTINATION ${CMAKE_INSTALL_BINDIR})
