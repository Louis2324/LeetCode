# Next Permuation

You’re given a list of integers, and you need to rearrange them into the **next lexicographically greater permutation**.

Lexicographical order = “dictionary order” but for numbers.

Examples:

- `[1,2,3] → [1,3,2]`
- `[2,3,1] → [3,1,2]`
- `[3,2,1] → [1,2,3]` (because it’s the last permutation, so wrap around)

**Constraints:**

- Transformation must be **in-place**
- Without using extra arrays
- Time complexity must be **O(n)**

---

## ** Core Insight**

The next permutation works by applying these 3 steps:

### ** Find the pivot (i)**

Scan from the right to find the first element where:

```
nums[i] < nums[i+1]
```

Why?
Because everything to the right is currently **descending**, meaning it’s already the _maximum_ permutation.
The pivot is the spot where an increase is still possible.

Snippet:

```cpp
int i = nums.size() - 2;
while (i >= 0 && nums[i] >= nums[i + 1]) {
    i--;
}
```

This finds the **first break in the descending order**, from right to left.

If no pivot is found (`i < 0`), the permutation is the very last one — so the answer is simply the fully ascending version.

---

### ** Find the correct element to swap with (j)**

Again, scan from the right to find the **smallest number greater than `nums[i]`**.

This ensures we move to the _next_ permutation, not skipping over possibilities.

Snippet:

```cpp
int j = nums.size() - 1;
while (nums[j] <= nums[i]) {
    j--;
}
swap(nums[i], nums[j]);
```

This guarantees the permutation increases by the smallest possible amount.

---

### ** Reverse the suffix**

Everything to the right of the pivot is descending.
Reversing it makes it ascending — the smallest possible order.

This ensures the result is the **next** permutation, not just a larger permutation.

```cpp
reverse(nums.begin() + i + 1, nums.end());
```

After the swap, the suffix is still a descending sequence.
Reversing it makes it minimal.

---

## ** Full Code **

```cpp
class Solution
{
public:
    void nextPermutation(vi &nums)
    {
        int i = nums.size() - 2;

        while (i >= 0 && nums[i] >= nums[i + 1])
        {
            i--;
        }

        if (i >= 0)
        {
            int j = nums.size() - 1;

            while (nums[j] <= nums[i])
            {
                j--;
            }

            swap(nums[i], nums[j]);
        }

        reverse(nums.begin() + i + 1, nums.end());
    }
};
```

---

## ** Example Run**

Input:

```
[1, 2, 3]
```

1. Pivot = index 1 (`2 < 3`)
2. Rightmost value > 2 is `3`
3. Swap → `[1, 3, 2]`
4. Reverse suffix (already sorted)

Output:

```
[1, 3, 2]
```

---
