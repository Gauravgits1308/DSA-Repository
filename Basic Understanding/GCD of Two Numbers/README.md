# GCD of Two Numbers I

## Problem
Given two integers `n1` and `n2`, find their Greatest Common Divisor (GCD).

---

## Brute Force Approach

### Intuition
The GCD of two numbers cannot be greater than the smaller number. Start checking divisibility from the smaller number down to `1`. The first common divisor encountered is the GCD.

### Algorithm
1. Find the smaller of the two numbers.
2. Traverse from the smaller number down to `1`.
3. If both numbers are divisible by the current value, return it.

### Complexity

| Time | Space |
|------|------|
| O(min(n1, n2)) | O(1) |

---

## Optimized Approach (Euclidean Algorithm)

### Intuition
Instead of checking every divisor, repeatedly replace the larger number with the remainder obtained after division.

```
gcd(a, b) = gcd(b, a % b)
```

Continue until one number becomes `0`.

### Complexity

| Time | Space |
|------|------|
| O(log(min(n1,n2))) | O(1) |

---

## Key Learning

- GCD never exceeds the smaller number.
- Euclidean Algorithm is the optimal solution.
- Frequently used in Number Theory and Competitive Programming.

---

## Related Problems

- LCM of Two Numbers
- Euclidean Algorithm
- Extended Euclidean Algorithm
