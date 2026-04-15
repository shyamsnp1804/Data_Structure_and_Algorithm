# 🐒 Koko Eating Bananas (Binary Search Problem)

## 📌 Problem Statement

A monkey is given `n` piles of bananas, where the `i-th` pile has `nums[i]` bananas. An integer `h` represents the total number of hours available.

Each hour, the monkey:
- Chooses **one pile**
- Eats **k bananas** from that pile
- If the pile has fewer than `k` bananas, it eats all of them

### 🎯 Goal:
Find the **minimum integer `k` (bananas per hour)** such that the monkey can finish all bananas within `h` hours.

---

## 💡 Approach

### 🔍 Key Idea

We need to find the **minimum eating speed `k`**.

- If `k` is too small → it will take **more time**
- If `k` is large → it will take **less time**

👉 This forms a **monotonic function**, so we can apply **Binary Search**.

---

## ⚙️ Steps

1. Define search space:
   - `low = 1`
   - `high = max(nums)`

2. For each mid (candidate `k`):
   - Calculate total hours needed:
     ```
     hours += ceil(nums[i] / k)
     ```

3. Compare:
   - If `hours <= h` → try smaller `k`
   - Else → increase `k`

---

## 🧠 Time & Space Complexity

| Complexity | Value |
|----------|--------|
| Time     | O(n * log(max(nums))) |
| Space    | O(1) |

---