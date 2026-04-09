# 🔍 Search in Rotated Sorted Array II (With Duplicates)

## 🚧 Core Challenge

The main difficulty in this problem comes from:

> **Duplicates + Rotation = Ambiguity**

In a normal rotated sorted array (without duplicates), we can always determine:

- Whether the **left half is sorted**, or
- The **right half is sorted**

This allows us to safely apply binary search.

---

## ⚠️ Tricky Edge Case

When the following condition occurs:

```cpp
nums[low] == nums[mid] == nums[high]
```

👉 We **cannot determine** which half is sorted.

---

## 🧠 Why is this a problem?

Consider the example:

```
[1, 0, 1, 1, 1]
 low mid high
```

- The left side appears sorted ❓
- The right side also appears sorted ❓

➡️ This breaks the **core assumption of binary search**, where we rely on at least one half being clearly sorted.

---

## 🔥 Key Idea (Golden Step)

When stuck in this ambiguous situation:

```cpp
low++;
high--;
```

### ✅ Why this works:

- We **eliminate duplicate boundaries**
- We **shrink the search space safely**
- We do not lose any potential target element

---

## 💡 Intuition

When duplicates block our ability to decide:

- Don’t try to guess the sorted half ❌
- Instead, **reduce the problem size** ✔️

This ensures progress even in the worst case.

---

## ⏱️ Time Complexity

| Case                    | Complexity |
| ----------------------- | ---------- |
| Best / Average          | O(log n)   |
| Worst (many duplicates) | O(n)       |

---

## 🚀 Summary

- Binary search works well when we can identify a sorted half
- Duplicates can destroy this guarantee
- When `low == mid == high`, we **shrink the range linearly**
- This is the **key trick** to solving the problem correctly

---

## 🎯 Interview Tip

> “The tricky part is handling duplicates where `low == mid == high`, which prevents us from identifying the sorted half. In such cases, we shrink the search space linearly.”

---
