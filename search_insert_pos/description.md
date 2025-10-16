# Search Insert Position

--Problem description 
---
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

--Solution description 
---

We use a binary search to efficiently find the target’s position in a sorted array or where it should be inserted if not found.

1. Initialize two pointers, `left` and `right`.
2. Keep track of an answer variable `ans` initialized to the size of the array.
3. While `left` is less than or equal to `right`:
   - Calculate the middle index `mid`.
   - If the element at `mid` equals the target, return `mid`.
   - If the element at `mid` is less than the target, move `left` to `mid + 1` to search the right half.
   - If the element at `mid` is greater than the target, update `ans` to `mid` (potential insert position) and move `right` to `mid - 1` to search the left half.
4. If the target is not found, return `ans` as the index where the target should be inserted.

---

## Complexity

- **Time Complexity:** O(log n)  
  We halve the search space each iteration, leading to logarithmic time.

- **Space Complexity:** O(1)  
  No additional data structures are used, and the search is performed in-place.