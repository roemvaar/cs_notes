CC=g++

# This is the default target, which will be built when you invoke make
.PHONY: all
all: cpp_algos_ds

# This rule tells make how to build c_algos_ds from main.c
cpp_algos_ds: main.cpp
	$(CC) -o cpp_algos_ds main.cpp

# This rule tells make to delete hello and hello.o
.PHONY: clean
clean:
	rm -f cpp_algos_ds
