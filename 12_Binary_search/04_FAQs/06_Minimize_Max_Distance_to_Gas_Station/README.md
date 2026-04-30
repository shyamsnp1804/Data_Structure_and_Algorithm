# 🚀 Minimize Maximum Distance Between Gas Stations

## 📌 Problem Statement

Given a sorted array `arr` of size `n`, representing positions of gas stations on the X-axis, and an integer `k`, you need to place `k` additional gas stations.

The new gas stations can be placed anywhere (even at non-integer positions).

### 🎯 Goal:
Minimize the **maximum distance** between adjacent gas stations after adding `k` stations.

---

## 💡 Key Insight

Instead of directly placing stations, we:

> 🔍 **Binary search on the answer (maximum distance)**

---

## 🧠 Intuition

- The answer lies between:
  - **Minimum:** `0`
  - **Maximum:** Largest gap between consecutive stations

- If we fix a distance `mid`, we can check:
  > How many stations are required to ensure all gaps ≤ `mid`?

---

## 🔧 Approach (Binary Search on Answer)

### Step 1: Define search space
- low = 0
- high = max(arr[i+1] - arr[i])

---

### Step 2: Binary Search Loop
- while (high - low > 1e-6):
- mid = (low + high) / 2

---

### Step 3: Feasibility Check

- For each gap: gap = arr[i] - arr[i-1]
- requiredStations = gap / mid

---

### Step 4: Decision Making

- If required stations > k: mid is too small → increase low

- Else: mid is valid → try smaller (high = mid)

---

### Step 5: Return Answer
- return high


---

## 🧮 Why Binary Search Works?

The problem is **monotonic**:

| Distance | Required Stations |
|----------|------------------|
| Small    | More ❌           |
| Large    | Less ✅           |

👉 This allows binary search.

---

## ⏱️ Time Complexity 

- O(n * log(maxGap / 1e-6))

- n → number of stations

## 📦 Space Complexity
- O(1)

---