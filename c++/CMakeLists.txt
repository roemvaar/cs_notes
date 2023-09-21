cmake_minimum_required (VERSION 3.5)

project (cpp)

set(SOURCES
    encapsulation.cc
    exceptions.cc
    files.cc
    google2.cc
    hello.cc
    inheritance_tp.cc
    inheritance_udacity.cc
    inheritance.cc
    oop_review.cc
    polymorphism.cc
    shared_memory.cc
    templates.cc
    tree_visualizer.cc
    virtual_methods.cc
)

# https://codegrepr.com/question/adding-multiple-executables-in-cmake/
foreach(translation_unit ${SOURCES})
    string(REPLACE ".cc" "" unit ${translation_unit})
    add_executable(${unit} ${translation_unit})
endforeach(translation_unit ${SOURCES})
