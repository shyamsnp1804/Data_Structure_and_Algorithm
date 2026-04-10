# 📘 Find Number of Rotations in Rotated Sorted Array

## 🚀 Problem Statement

Given an array of **distinct integers** sorted in ascending order and then **right rotated** an unknown number of times (between 0 and n-1), determine the **number of rotations** performed.

---

## 🧠 Key Insight

👉 The **number of rotations** is equal to the **index of the minimum element**.

### 💡 Why?

* In a rotated sorted array, the smallest element is the **pivot point**
* This pivot tells us how many times the array was rotated

---

## 🔍 Example

```cpp
Input:  [4, 5, 6, 7, 0, 1, 2]
Output: 4  which is index of minimum element
```

* Minimum element = `0`
* Index of `0` = **4**
* 👉 Number of rotations = **4**

---

## 🚀 Approach (Binary Search)

We use Binary Search to efficiently locate the minimum element.

### Logic:

* If `arr[mid] > arr[high]`
  👉 Minimum lies in the **right half**
* Else
  👉 Minimum lies in the **left half (including mid)**

---

## 🧪 Dry Run

| low | mid | high | Decision |
| --- | --- | ---- | -------- |
| 0   | 3   | 6    | Go Right |
| 4   | 5   | 6    | Go Left  |
| 4   | 4   | 5    | Go Left  |

✅ Final Answer: `4`

---

## ⏱️ Complexity Analysis

| Type             | Complexity   |
| ---------------- | ------------ |
| Time Complexity  | **O(log N)** |
| Space Complexity | **O(1)**     |

---

## ⚠️ Edge Cases

* ✅ Already sorted array → `0` rotations
* ✅ Single element array → `0` rotations
* ✅ Small arrays (size 1 or 2)
* ✅ Rotation at last index

---

⭐ If you found this helpful, don’t forget to star the repo!
