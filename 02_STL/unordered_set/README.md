# STL Unordered Set

## Overview
`std::unordered_set` is an **associative container** in C++ STL that stores **unique elements** in **no particular order**.

It is implemented using a **hash table**, which allows very fast average-time operations.

---

## Key Characteristics
- Stores **unique elements only**
- Elements are **not sorted**
- Order of elements is unpredictable
- Uses **hashing**
- Very fast average-time operations

---

## Declaration

- unordered_set<int> us;

## Insertion

- us.insert(10);
- us.insert(20);
- us.insert(10);   // ignored as it store unique element

## Searching Elements

- us.find(20); // Returns an iterator to the element if found, otherwise returns us.end().
- us.count(20);   // returns 1 if exists, else 0

## Deletion

- us.erase(20);

## Capacity Functions

- us.size();
- us.empty();

## Time Complexity

| Operation | Average | Worst |
| --------- | ------- | ----- |
| insert()  | O(1)    | O(n)  |
| erase()   | O(1)    | O(n)  |
| find()    | O(1)    | O(n)  |
| count()   | O(1)    | O(n)  |

## unordered_set vs set

| Feature        | unordered_set | set            |
| -------------- | ------------- | -------------- |
| Order          | Unordered     | Sorted         |
| Implementation | Hash Table    | Red-Black Tree |
| Search Time    | O(1) avg      | O(log n)       |
| Duplicates     | ❌ No          | ❌ No           |

## When to Use Unordered Set

- Order does not matter
- Fast lookup is required
- You need unique elements only