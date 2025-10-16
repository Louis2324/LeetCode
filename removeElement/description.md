# Remove Element - Two Pointer Approach

## Problem
Given an integer array `nums` and an integer value `val`, remove all instances of `val` in-place.  
The relative order of the elements may be changed.  
Return the new length `k` such that the first `k` elements of `nums` do not contain `val`.

---

## Approach: Two Pointers (Read and Write)

We use two pointers:
- `read` pointer: scans through each element of the array.
- `write` pointer: keeps track of the next position to overwrite with a value that is **not** equal to `val`.

### Steps:
1. Initialize `write = 0`.
2. Loop through the array using `read`.
3. For every element `nums[read]`:
   - If it is **not equal** to `val`, assign `nums[write] = nums[read]` and increment `write`.
   - If it **is equal**, skip it.
4. After the loop ends, return `write`
