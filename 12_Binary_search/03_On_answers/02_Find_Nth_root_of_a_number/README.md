# 📌 Nth Root of a Number

## 🧠 Problem Statement

Given two integers **N** and **M**, find the **Nth root of M**.

The Nth root of a number **M** is a number **X** such that:

X^N = M

### ✅ Return:

- The integer **X** if it exists
- Otherwise, return **-1**

---

## 📥 Examples

### Example 1

Input: N = 2, M = 9  
Output: 3  
Explanation: 3^2 = 9

### Example 2

Input: N = 3, M = 27  
Output: 3  
Explanation: 3^3 = 27

### Example 3

Input: N = 2, M = 10  
Output: -1  
Explanation: No integer root exists

---

## 🚀 Approach

### 🔍 Binary Search on Answer

We use **Binary Search** to efficiently find the answer in the range [1, M].

### Steps:

1. Set `low = 1` and `high = M`
2. Find `mid`
3. Compute `mid^N`
4. Compare with `M`:
   - If equal → return `mid`
   - If smaller → search right
   - If larger → search left

---

## ⚠️ Key Optimization

### ❌ Avoid using `pow()`

- Returns floating-point values
- Can cause precision errors

### ✅ Use manual multiplication

- Ensures exact integer results

### 🔥 Early Stopping (Important)

- If `mid^N > M`, stop immediately
- Prevents overflow and saves time

---
