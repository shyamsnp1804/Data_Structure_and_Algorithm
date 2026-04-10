# 📘 Single Element in a Sorted Array

## 🚀 Problem Statement

Given a sorted array `nums` (non-decreasing order):

- Every element appears **exactly twice**
- Except **one element**, which appears only once

👉 Find that single element in **O(log N)** time and **O(1)** space.

---

## 🧠 Key Insight

In a normal sorted array (without the single element):

- First occurrence of a pair is at **even index**
- Second occurrence is at **odd index**

### 🔍 Example:

```
[1,1, 2,2, 3,3, 4,4]
 0 1  2 3  4 5  6 7
```

---

## ⚠️ What changes?

When the single element appears, this pattern **breaks**:

```
[1,1, 2,2, 3, 4,4, 5,5]
                ↑ single element
```

After this point:

- Pair pattern shifts (odd-even instead of even-odd)

---

## 🎯 Core Idea

👉 **Find the index where the pair pattern breaks**

---

## 🚀 Approach (Binary Search)

1. Use binary search
2. Always make `mid` an **even index**
3. Compare `nums[mid]` with `nums[mid+1]`

### 🔍 Logic

- If `nums[mid] == nums[mid+1]`
  👉 Pair is valid → move **right**

- Else
  👉 Pattern breaks → move **left (including mid)**

---

## 🧪 Dry Run

Input:

```
[1,1,2,2,3,4,4,5,5]
```

| low | mid | check           | action   |
| --- | --- | --------------- | -------- |
| 0   | 4   | 3 != 4          | go left  |
| 0   | 2   | 2 == 2          | go right |
| 4   | 4   | single found 🎯 | done     |

👉 Output: `3`

---

## ❓ Doubts Explained

### 🔹 Why do we make `mid` even?

Because:

- Pairs always start at **even indices** (before the single element)
- Making `mid` even ensures we always compare:

  ```
  nums[mid] with nums[mid+1]
  ```

- This helps us correctly identify whether the pair is valid

---

### 🔹 How do we decide left or right?

- If `nums[mid] == nums[mid+1]`
  👉 Pattern is correct → single element is on **right side**

- If not equal
  👉 Pattern is broken → single element is on **left side**

---

### 🔹 Why is `nums[low]` the answer?

- Binary search keeps reducing the search space
- We **never discard the single element**
- At the end:

  ```
  low == high
  ```

- Only one element remains → that is the answer 🎯

---

## ⏱️ Complexity Analysis

| Type             | Complexity   |
| ---------------- | ------------ |
| Time Complexity  | **O(log N)** |
| Space Complexity | **O(1)**     |

---

## ⚠️ Edge Cases

- Single element at start → `[1,2,2,3,3]`
- Single element at end → `[1,1,2,2,3]`
- Only one element → `[7]`

---

⭐ Star this repo if it helped you!
