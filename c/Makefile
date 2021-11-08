CC=gcc

# This is the default target, which will be built when you invoke make
.PHONY: all
all: c_algos_ds

# This rule tells make how to build c_algos_ds from main.c
c_algos_ds: main.c
	$(CC) -o c_algos_ds main.c

# This rule tells make to delete hello and hello.o
.PHONY: clean
clean:
	rm -f c_algos_ds
