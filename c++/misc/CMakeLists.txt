cmake_minimum_required (VERSION 3.5)

project (misc)

set(SOURCES
    bin2histogram.cc
    bin2txt.cc
    boundary_checker.cc
    #extract_can_fields.cc
    sanity_check.cc
    split_channels.cc
    verify_split_files.cc
)

# https://codegrepr.com/question/adding-multiple-executables-in-cmake/
foreach(translation_unit ${SOURCES})
    string(REPLACE ".cc" "" unit ${translation_unit})
    add_executable(${unit} ${translation_unit})
endforeach(translation_unit ${SOURCES})
