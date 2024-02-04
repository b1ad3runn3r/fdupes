cmake_minimum_required(VERSION 3.20)
project("fdupes" C)

add_subdirectory(src/fdupes)
add_subdirectory(src/sqlite)
add_subdirectory(src/ncurses)

target_link_libraries(fdupes fdupes_ncurses fdupes_sqlite)
