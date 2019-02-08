add_executable(bnf
  src/main.cpp
)

target_link_libraries(bnf
  CONAN_PKG::fmt
  CONAN_PKG::spdlog
  CONAN_PKG::pegtl
)

install(
  TARGETS bnf
  DESTINATION ${CMAKE_INSTALL_BINDIR})
