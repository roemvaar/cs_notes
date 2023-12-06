# Arrays

Array are a simple data structure for storing data elements of the same data type. Arrays are
used as the basis for most other data structures. The elements are stored in neighboring (contiguous)
memory locations. Arrays can hold up to N items.

```c
    // Declare an array of 10 int elements in C
    int array[10];
```

In C, if an array is not defined, i.e. if you don't put anything inside, the array elements could
contain completely random data. The array capacity must be decided when the array is created. The
capacity cannot be changed later

# (Static) Arrays

Static sequence interface. Static Arrays are great if you're doing nothing dynamic, such as 
random access memory.

Members:
  
* element: each item stored in an array is called an element
* index: each location of an element in an array has a numerical index, which is used to
identify the element
* capacity: the number of elements that the array could hold, if it was full
* length: the number of elements that the array currently has

Operations:

* build(size) - create fixed-size array
* build(size, value) - create fixed-size array, initializes all positions with value
* len() - returns n
* traverse(): - output all elements of the array from pos 0 to size - 1
* get_at(idx): - return xi (index i)
* set_at(idx, value): add an element at the given index
* get_first/last()
* set_first/last(value)


# Vectors

Special types of arrays. Dynamic arrays helps us improve static arrays performance by implementing
certain operations different. Python: lists. C++: vectors.

Operations:

* Same as fixed-size array, plus:
* insert_at(idx, value) - make x the new x_i, shifting all numbers to the "right"
* delete_at(idx) - delete element at i, and shift all elements bigger than x_i+1 to
the "left"
* insert/delete at first/last (value)/()
