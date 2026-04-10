# 📘 Find Minimum in Rotated Sorted Array

## 🚀 Problem Statement

Given an array of **distinct integers** sorted in ascending order and then rotated an unknown number of times, find the **minimum element**.

- The array was originally sorted.
- It is rotated between **1 and N times**.
- Your task is to solve it efficiently in **O(log N)** time.

---

## 🧠 Approach (Binary Search)

Instead of scanning the entire array, we use **Binary Search** to optimize the solution.

### 💡 Key Insight

At any point:

- One half of the array is always **sorted**
- The minimum lies in the **unsorted half**

### 🔍 Logic

- If `arr[mid] > arr[high]`
  👉 Minimum lies in the **right half**
- Else
  👉 Minimum lies in the **left half (including mid)**

---

## 🧪 Dry Run

### Input:

```
[4, 5, 6, 7, 0, 1, 2, 3]
```

| low | mid | high | Decision |
| --- | --- | ---- | -------- |
| 0   | 3   | 7    | Go Right |
| 4   | 5   | 7    | Go Left  |
| 4   | 4   | 5    | Go Left  |

✅ Final Answer: `0`

---

## ⏱️ Complexity Analysis

| Type             | Complexity   |
| ---------------- | ------------ |
| Time Complexity  | **O(log N)** |
| Space Complexity | **O(1)**     |

---

## ⚠️ Edge Cases

- ✅ Single element array → return that element
- ✅ Already sorted array → first element is minimum
- ✅ Rotation at last index
- ✅ Small arrays (size 1 or 2)

---
