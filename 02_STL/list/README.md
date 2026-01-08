# STL List

## Overview
`std::list` is a sequence container that supports **non-contiguous memory allocation**.

Unlike `std::vector`, which provides faster traversal due to contiguous memory, `std::list` has **slower traversal**. However, it excels in **insertion and deletion operations**, which are performed in **constant time** once the position is known.

## Internal Structure
A list in C++ STL is implemented as a **doubly-linked list**, allowing efficient insertion and deletion:
- At the **front**
- At the **back**
- In the **middle**

## Key Characteristics
- Non-contiguous memory allocation
- No fast random access (`operator[]` not supported)
- Efficient insertions and deletions (O(1) at known position)
- Slower traversal compared to vectors

## When to Use `std::list`
- When frequent insertions and deletions are required
- When random access is not needed
- When stable iterators are important


## functions and their uses ->

## push_front() vs emplace_front()

### push_front()
- Inserts an element at the **front** of the list
- The object is **created first** and then **copied or moved** into the list
- Slightly less efficient for complex objects

### emplace_front()
- Constructs the element directly at the front of the list
- No temporary object is created
- Avoids unnecessary copy or move operations
- More efficient than push_front() for complex data types
