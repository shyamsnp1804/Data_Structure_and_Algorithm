# STL Set

## Overview
`std::set` is an **associative container** in C++ STL that stores **unique elements** in **sorted (ascending) order** by default.

It automatically removes duplicates and keeps elements ordered using a **balanced binary search tree (Red-Black Tree)**.

---

## Key Characteristics
- Stores **unique elements only**
- Elements are stored in **sorted order**
- No random access (`[]` not allowed)
- Fast search, insertion, and deletion
- Internally implemented using a **Red-Black Tree**

---

## Declaration

- set<int> st;

## Insertion
- st.insert(16);
- st.insert(14);
- st.insert(12);
- st.insert(13);
- st.insert(13);   // ignored (duplicate)

## Searching Elements
- st.count(13);   // returns 1 (exists)
- st.count(11);   // returns 0 (not exists)
- st.find(14);

## Deletion
- st.erase(14);

## Bounds in Set
- auto it = st.lower_bound(x); // Returns an iterator to the first element ≥ x
- auto it = st.upper_bound(12);// Returns an iterator to the first element > x

## Time Complexity

| Operation     | Time     |
| ------------- | -------- |
| insert()      | O(log n) |
| erase()       | O(log n) |
| find()        | O(log n) |
| count()       | O(log n) |
| lower_bound() | O(log n) |
| upper_bound() | O(log n) |

## When to Use Set
- You need unique elements
- Data must remain sorted
- Fast searching is required