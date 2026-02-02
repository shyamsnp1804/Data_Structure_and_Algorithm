# STL Multimap

## Overview
`std::multimap` is an **associative container** in C++ STL that stores elements as  
**key–value pairs**, where **multiple elements can have the same key**.

Unlike `std::map`, keys in a multimap **do not need to be unique**.

---

## Key Characteristics
- Stores **(key, value)** pairs
- **Duplicate keys are allowed**
- Elements are stored in **sorted order of keys**
- No random access
- Implemented using a **Red-Black Tree**

---

## Declaration
- multimap<int, int> mmp;

## Insertion
- mmp.insert({1, 10});    // Inserts a key–value pair.
- mmp.insert({1, 20});   // allowed means key need not to be unique
- mmp.emplace(2, 30);    // Constructs the key–value pair in place.

## Accessing Elements
- ❌ operator[] is not supported in multimap because keys are not unique.

## Traversal
- Elements are traversed in sorted order of keys.
- for (auto it : mmp) {
    cout << it.first << " -> " << it.second << endl;
}

## Searching Elements
- find() - Returns an iterator to one of the elements with the given key.
- auto it = mmp.find(1);

- count() - Returns the number of elements with the given key.
- mmp.count(1);

- equal_range() - Returns a range of iterators for all elements with the given key.
- auto range = mmp.equal_range(1);
for (auto it = range.first; it != range.second; it++) {
    cout << it->second << " ";
}

## Deletion
- erase() - Removes elements from the multimap.
- mmp.erase(1);          // removes all entries with key = 1
- mmp.erase(mmp.begin()); // erase by iterator

## Capacity Functions
- mmp.size();
- mmp.empty();

## Time Complexity
- | Operation | Time     |
| --------- | -------- |
| insert()  | O(log n) |
| erase()   | O(log n) |
| find()    | O(log n) |
| count()   | O(log n) |

## Multimap vs Map
| Feature        | multimap  | map           |
| -------------- | --------- | ------------- |
| Duplicate keys | ✅ Allowed | ❌ Not allowed |
| Sorted order   | ✅ Yes     | ✅ Yes         |
| operator[]     | ❌ No      | ✅ Yes         |

## When to Use Multimap
- Multiple values are associated with the same key
- Sorted traversal by key is required

## Interview Tip
- std::multimap allows duplicate keys and stores elements in sorted order using a balanced tree.