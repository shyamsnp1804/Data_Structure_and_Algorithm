# STL Queue (FIFO)

## Overview

In the C++ Standard Template Library (STL), `std::queue` is a **container adapter** that follows the **First In, First Out (FIFO)** principle.

This means the element that is inserted first is removed first, making queues ideal for **task scheduling, buffering, and order-based processing**.

---

## What is std::queue?

`std::queue` does not store elements directly.  
It works on top of another container (by default `std::deque`) and provides a **restricted interface** to allow only FIFO operations.

---

## Key Characteristics

- Follows **FIFO (First In, First Out)**
- Insert from the **back**
- Remove from the **front**
- No random access
- No iterators

---

## Common Operations

### Insertion

- q.push(x)
- q.emplace(x)

### Deletion

- q.pop()

### Access

- q.front() // First element
- q.back() // Last element

### Capacity

- q.size()
- q.empty()
