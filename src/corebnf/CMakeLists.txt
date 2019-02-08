project(corebnf VERSION 0.1 LANGUAGES CXX)

add_library(corebnf
  src/bnf.cpp
)

target_include_directories(corebnf PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE src)

install(TARGETS corebnf EXPORT BNFConfig
    ARCHIVE  DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY  DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME  DESTINATION ${CMAKE_INSTALL_BINDIR})  # This is for Windows
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(EXPORT BNFConfig DESTINATION share/BNF/cmake)

add_executable(core_unit
  test/main.cpp
  test/resource.cpp
)

set_target_properties(core_unit PROPERTIES
  CXX_STANDARD 17
)

target_link_libraries(core_unit
  corebnf
  stdc++fs
  CONAN_PKG::fmt
  CONAN_PKG::catch2
)

target_compile_options(core_unit
  PUBLIC -DRESOURCE_DIR="${CMAKE_CURRENT_SOURCE_DIR}/test/inputs")

add_test(NAME core_unit
         COMMAND $<TARGET_FILE:core_unit>)
