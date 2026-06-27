# GCD of Two Numbers II (Euclidean Algorithm)

## Problem

Given two integers `a` and `b`, find their **Greatest Common Divisor (GCD)**.

---

## Approach

### Intuition

The Euclidean Algorithm is based on the observation that replacing the larger number with the remainder of the division does **not** change the GCD.

```
gcd(a, b) = gcd(b, a % b)
```

Repeat this process until `b` becomes `0`. At that point, `a` is the GCD.

---

## Algorithm

1. Start with two integers `a` and `b`.
2. While `b != 0`:
   - Store `b` in a temporary variable.
   - Update `b = a % b`.
   - Update `a = temp`.
3. Return `a`.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(log(min(a, b)))** |
| **Space Complexity** | **O(1)** |

---

## Why This Works

The Euclidean Algorithm relies on the mathematical property:

```
gcd(a, b) = gcd(b, a % b)
```

Each iteration reduces the size of the numbers while preserving the GCD, making it significantly faster than checking every divisor.

---

## Key Learning

- Euclidean Algorithm is the standard and optimal method for finding the GCD.
- The GCD remains unchanged when replacing the larger number with the remainder.
- This algorithm is widely used in Number Theory, Competitive Programming, and Coding Interviews.

---

## Comparison

| Approach | Time Complexity | Space Complexity |
|----------|-----------------|------------------|
| Brute Force | O(min(a, b)) | O(1) |
| Euclidean Algorithm | O(log(min(a, b))) | O(1) |
