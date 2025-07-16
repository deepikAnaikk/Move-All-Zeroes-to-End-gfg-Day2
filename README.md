# Move-All-Zeroes-to-End-gfg-Day2

How it works:
count keeps track of the index where the next non-zero element should be placed.

When a non-zero element is found, it is swapped with the element at count, and count is incremented.

This ensures that all non-zero elements are shifted to the front in order, and all zeros are moved to the end.

✅ Time and Space Complexity:
Time Complexity: O(n)

Space Complexity: O(1) (in-place)
