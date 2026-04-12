# 🧮 Floor Square Root using Binary Search

## 📌 Problem Statement

Given a non-negative integer `n`, find the **floor value of its square root**.

> The floor of √n is the greatest integer `x` such that:
>
> `x × x ≤ n`

---

## 🧠 Intuition

We need to find a number whose square is **less than or equal to `n`**, and as **close as possible** to `n`.

### Key Idea:

* If `mid × mid ≤ n` → it can be an answer ✅
* But maybe a **bigger value exists**, so search right
* If `mid × mid > n` → too big ❌ → search left

👉 This pattern is perfect for **Binary Search**

---

## ⚡ Approach (Binary Search)

1. Initialize:

   * `low = 0`
   * `high = n`
   * `ans = 0`

2. While `low ≤ high`:

   * Find `mid`
   * If `mid × mid ≤ n`:

     * Store `mid` as answer
     * Move right → `low = mid + 1`
   * Else:

     * Move left → `high = mid - 1`

3. Return `ans`

---

## 🧪 Example

### Input:

```
n = 28
```

### Process:

* 5 × 5 = 25 ✅
* 6 × 6 = 36 ❌

### Output:

```
5
```

---

## ⚠️ Important Notes

* If `n` is a perfect square → exact root is returned

  * Example: √25 = 5
* If not → **floor value** is returned

  * Example: √28 = 5

---

## 🚨 Edge Cases

* `n = 0` → Output = 0
* `n = 1` → Output = 1
* Large values of `n` → handle overflow carefully

---

## ⏱️ Complexity Analysis

| Type             | Complexity   |
| ---------------- | ------------ |
| Time Complexity  | **O(log n)** |
| Space Complexity | **O(1)**     |

---

## 🧠 Why Binary Search?

Because:

* Search space is sorted (0 → n)
* We can eliminate half of the search space each time

---

## 🔥 Pro Tip (Interview Highlight)

Instead of:

```
mid * mid <= n
```

Use:

```
mid <= n / mid
```

👉 Prevents integer overflow 

---

## 📚 Summary

* Use Binary Search on range `[0, n]`
* Track last valid answer
* Optimize multiplication to avoid overflow

---

✨ **Master this pattern — it is used in many problems like:**

* Square root
* Kth root
* Binary search on answers
