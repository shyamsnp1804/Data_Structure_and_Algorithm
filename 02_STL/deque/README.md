# STL Deque (Double Ended Queue)

## Overview

A **deque** (double-ended queue) is a sequence container that allows **fast insertion and deletion at both the front and the back**.

It is more flexible than a `vector` or `list` when elements need to be frequently added or removed from **both ends**.

---

## What is std::deque?

`std::deque` stores elements in **multiple contiguous memory blocks**, not in one single block like `vector`.  
This allows it to grow and shrink efficiently from both ends.

---

## Key Characteristics

- Fast insertion & deletion at **front and back**
- Supports **random access** like a vector
- Memory is **not fully contiguous**
- Slightly slower than vector for traversal
- Faster than vector for front insertions

---

## Common Operations

### Insertion

- d.push_back(x);
- d.push_front(x);
- d.emplace_back(x);
- d.emplace_front(x);

### Deletion
- d.pop_back();
- d.pop_front();
- d.clear();

### Access
- d.front();
- d.back();
- d[i];      // Random access supported
- d.at(i);

### Capacity
- d.size();
- d.empty();

### Time Complexity

| Operation              | Time |
| ---------------------- | ---- |
| push_front / push_back | O(1) |
| pop_front / pop_back   | O(1) |
| Random access (d[i])   | O(1) |
| Insertion in middle    | O(n) |
| Traversal              | O(n) |
