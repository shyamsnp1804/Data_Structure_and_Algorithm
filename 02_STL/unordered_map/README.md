# STL Unordered Map

## Overview
`std::unordered_map` is an **associative container** in C++ STL that stores  
elements as **key–value pairs** using **hashing**.

Unlike `std::map`, it does **not store elements in sorted order**, but provides
very fast average-time operations.

---

## Key Characteristics
- Stores **(key, value)** pairs
- Keys are **unique**
- Elements are **unordered**
- Implemented using a **hash table**
- Faster than `map` on average

---

## Declaration
- unordered_map<int, int> ump;

## Insertion
- ump.insert({1, 10}); // Inserts a key–value pair.
- ump[2] = 20; // Inserts a key with default value if it does not exist.
- ump.emplace(3, 30); // Constructs the key–value pair in place.

## Accessing Elements
- ump[1];       // returns value for key 1
- ump.at(2);    // at() throws an exception if the key does not exist.

## Traversal
- Traversal order is not fixed.
- for (auto it : ump) {
    cout << it.first << " -> " << it.second << endl;
}

## Searching Elements
- auto it = ump.find(2); // Returns an iterator to the element if found, otherwise returns ump.end().
- ump.count(2);   // returns 1 or 0

## Deletion
- ump.erase(2);              // erase by key
- ump.erase(ump.begin());    // erase by iterator

## Capacity Functions
- ump.size();
- ump.empty();

## Time Complexity

| Operation   | Average | Worst |
| ----------- | ------- | ----- |
| insert()    | O(1)    | O(n)  |
| erase()     | O(1)    | O(n)  |
| find()      | O(1)    | O(n)  |
| access ([]) | O(1)    | O(n)  |

## Unordered Map vs Map

| Feature        | unordered_map | map            |
| -------------- | ------------- | -------------- |
| Order          | Unordered     | Sorted         |
| Implementation | Hash Table    | Red-Black Tree |
| Search         | O(1) avg      | O(log n)       |
| Keys unique    | ✅             | ✅              |

## When to Use Unordered Map

- Use std::unordered_map when:
- Order of keys does not matter
- Fast lookup is required
- You want better average performance

## Interview Tip
- std::unordered_map provides faster average-time complexity than map but does not maintain any ordering of keys.