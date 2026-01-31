# STL Map

## Overview
`std::map` is an **associative container** in C++ STL that stores elements as  
**key–value pairs** and keeps them **sorted by key**.

Each key in a map is **unique**, and values are accessed using their keys.

---

## Key Characteristics
- Stores data in **(key, value)** pairs
- Keys are **unique**
- Elements are stored in **sorted order of keys**
- No random access
- Implemented using a **Red-Black Tree**

---

## Declaration
- map<int, int> mp;

## Insertion
- mp.insert({1, 10}); // Inserts a key–value pair.
- mp[2] = "abc";      // Inserts a key with default value if it does not exist.
- mp.emplace(6, "Ram");// Constructs the key–value pair in place.

## Accessing Elements
- mp[1];        // returns value for key 1
- mp.at(2);     // bounds-checked access

## Traversal
- for (auto it : mp) {
    cout << it.first << " -> " << it.second << endl;
}
- Elements are traversed in sorted order of keys.

## Searching Elements
- find() - Returns an iterator to the element if found, otherwise returns mp.end().
- auto it = mp.find(2);

- count() - Checks whether a key exists.
- mp.count(2);   // returns 1 or 0

## Deletion
- erase() - Removes elements from the map.
- mp.erase(2);           // erase by key
- mp.erase(mp.begin());  // erase by iterator

## Capacity Functions
- mp.size();
- mp.empty();

## Time Complexity

| Operation   | Time     |
| ----------- | -------- |
| insert()    | O(log n) |
| erase()     | O(log n) |
| find()      | O(log n) |
| access ([]) | O(log n) |

## Map vs Unordered Map

| Feature        | map            | unordered_map |
| -------------- | -------------- | ------------- |
| Order          | Sorted         | Unordered     |
| Implementation | Red-Black Tree | Hash Table    |
| Search         | O(log n)       | O(1) avg      |
| Keys unique    | ✅              | ✅             |

## When to Use Map

- Use std::map when:
- You need sorted data
- Keys must be unique
- Ordered traversal is required

## Interview Tip
- std::map stores key–value pairs in sorted order of keys with logarithmic time complexity.