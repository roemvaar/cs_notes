# Arrays

# Arrays

Static sequence interface

Operations:

* build(size) - create fixed-size array
* build(size, value) - create fixed-size array, initializes all positions with value
* len() - returns n
* traverse() - output all elements of the array from pos 0 to size - 1
* get_at(idx) - return xi (index i)
* set_at(idx, value) - adds value at position idx
* get_first/last()
* set_first/last(x)


# Vectors

Dynamic arrays.

Operations:

* Same as fixed-size array, plus:
* insert_at(i, x) - make x the new x_i, shifting all numbers to the "right"
* delete_at(i) - delete element at i, and shift all elements bigger than x_i+1 to
the "left"
* insert/delete at first/last (x)/()
