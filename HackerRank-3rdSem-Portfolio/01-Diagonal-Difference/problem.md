# Diagonal Difference

**Topic:** 2D Arrays / Matrices

### Approach
Traverse the matrix once. For each row `i`, add `arr[i][i]` to the primary diagonal and `arr[i][n-1-i]` to the secondary diagonal. Return the absolute difference.

### Complexity
- **Time:** O(N)
- **Space:** O(1) auxiliary space

The matrix itself requires O(N²) input storage, but the algorithm uses only two running sums beyond the input.
