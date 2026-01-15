# STL Priority Queue

## Overview

`std::priority_queue` is a **container adapter** that stores elements in such a way that the **largest (or highest priority) element is always at the top**.

Unlike a normal queue (FIFO), a priority queue processes elements based on **priority**, not insertion order.

---

## What is std::priority_queue?

`std::priority_queue` is implemented using a **heap data structure** (by default a **max-heap**).  
This ensures that the highest priority element can be accessed quickly.

---

## Key Characteristics

- Always keeps the **largest element on top** (default)
- Does **not follow FIFO**
- No random access
- No iterators
- Internally uses a **heap**

---

## Common Operations

### Insertion

- pq.push(x)
- pq.emplace(x)

### Removal

- pq.pop() // removes top element

### Access

- pq.top() // highest priority element

### Capacity

- pq.size()
- pq.empty()

## Max Heap vs Min Heap

### Default (Max Heap)

- priority_queue<int> pq; // largest element on top

### for Min Heap

- priority_queue<int, vector<int>, greater<int>> pq; // smallest element on top

### Time Complexity

| Operation | Time     |
| --------- | -------- |
| push()    | O(log n) |
| pop()     | O(log n) |
| top()     | O(1)     |
