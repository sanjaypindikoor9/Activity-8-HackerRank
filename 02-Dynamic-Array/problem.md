# Dynamic Array

**Topic:** Data Structures / Vectors

### Approach
Maintain `n` dynamic sequences. For every query, calculate the sequence index using `(x ^ lastAnswer) % n`. Type 1 appends `y`; type 2 reads the requested position, updates `lastAnswer`, and records it.

### Complexity
- **Time:** O(Q) for Q queries (therefore within the activity's O(N + Q) target)
- **Space:** O(N + Q) in the complete input/answer representation; O(N + total stored sequence elements) for the dynamic sequences.

The operation on a vector is O(1) amortized for append and O(1) for indexed access.
