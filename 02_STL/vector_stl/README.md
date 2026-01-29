# STL Vector

## Overview
`std::vector` is a **sequence container** in C++ STL that stores elements in **contiguous memory** and allows **dynamic resizing**.

It provides fast access to elements and is one of the most commonly used STL containers.

---

## Key Characteristics
- Stores elements in **contiguous memory**
- Supports **random access**
- Automatically resizes when capacity is exceeded
- Fast traversal
- Slower insertion and deletion in the middle

---

## Declaration
- vector<int> v;

## Insertion
- v.push_back(10); // Adds an element to the end of the vector.
- v.emplace_back(20); // Constructs an element directly at the end of the vector.
- v.insert(v.begin() + 1, 15); // Inserts an element at a specific position.

## Deletion
- v.pop_back(); // Removes the last element.
- v.erase(v.begin() + 1); // Removes an element 
- v.erase(v.begin(), v.begin() + 2); // Removes a range of elements.

## Accessing Element
- v[0];       // Fast access (no bounds checking)
- v.at(0);    // Bounds-checked access
- v.front();
- v.back();

## Capacity Functions
- v.size();       // number of elements
- v.capacity();   // allocated storage
- v.empty();      // check if vector is empty

## Reverse
- reserve() // Reserves memory to avoid frequent reallocations.

## Time Complexity

| Operation               | Time           |
| ----------------------- | -------------- |
| push_back()             | O(1) amortized |
| pop_back()              | O(1)           |
| Access (v[i])           | O(1)           |
| insert / erase (middle) | O(n)           |
| Traversal               | O(n)           |


## Vector vs Array

| Feature     | Vector  | Array |
| ----------- | ------- | ----- |
| Size        | Dynamic | Fixed |
| Memory      | Heap    | Stack |
| Resizable   | ✅ Yes   | ❌ No  |
| STL support | ✅ Yes   | ❌ No  |

## When to Use Vector

- You need fast random access
- Data size is dynamic
- Insertions mostly happen at the end
