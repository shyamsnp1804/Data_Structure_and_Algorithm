# STL Multiset

## Overview

`std::multiset` is an **associative container** in C++ STL that stores elements in **sorted order** and **allows duplicate values**.

It is useful when you need ordered data but duplicates are allowed.

---

## Key Characteristics

- Stores **duplicate elements**
- Elements are stored in **ascending sorted order**
- No random access (`[]` not supported)
- Internally implemented using a **Red-Black Tree**
- All major operations take **O(log n)** time

---

## Declaration

- multiset<int> ms;

## Insertion

- ms.insert(91);
- ms.insert(89);
- ms.insert(96);
- ms.insert(88);
- ms.insert(99);

## Deletion

- ms.erase(99);
- Removes elements in a range [start, end).

## Time Complexity

| Operation | Time     |
| --------- | -------- |
| insert()  | O(log n) |
| erase()   | O(log n) |
| traversal | O(n)     |

## Multiset vs Set

| Feature            | multiset                         | set            |
| ------------------ | -------------------------------- | -------------- |
| Duplicate elements | ✅ Allowed                       | ❌ Not allowed |
| Sorted order       | ✅ Yes                           | ✅ Yes         |
| erase(value)       | Removes all occurrences of value | Removes value  |
| Internal structure | Red-Black Tree                   | Red-Black Tree |
