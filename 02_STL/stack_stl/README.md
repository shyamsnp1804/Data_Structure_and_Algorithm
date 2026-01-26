# STL Stack

## Overview

`std::stack` is a **container adapter** in C++ STL that follows the  
**LIFO (Last In, First Out)** principle.

Elements are inserted and removed **only from the top** of the stack.

---

## Key Characteristics

- Follows **LIFO** order
- Insertion and deletion happen only at the **top**
- No random access
- No iterators
- Internally uses another container (default: `deque`)

---

## Declaration

- stack<int> st;

## Insertion

- st.push(4);
- st.push(7);

## Accessing Top Element

- st.top();
- ⚠️ Calling top() on an empty stack causes undefined behavior.

## Deletion

- st.pop();

## Capacity Functions

- st.size(); // Returns the number of elements in the stack.
- st.empty(); // Checks whether the stack is empty.
- st3.swap(st2); // Swaps the contents of two stacks.

## Time Complexity

| Operation | Time |
| --------- | ---- |
| push()    | O(1) |
| pop()     | O(1) |
| top()     | O(1) |
| size()    | O(1) |
| empty()   | O(1) |
| swap()    | O(1) |

## When to Use Stack

- You need LIFO behavior
- Reversing data
- Function calls / recursion
- Undo–Redo operations
