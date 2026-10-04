# Sparse Arrays

**Topic:** Hash Maps / Strings

### Approach
Count the frequency of every input string once using an `unordered_map`. Each query is then answered by a direct hash lookup instead of scanning all strings.

### Complexity
- **Expected Time:** O(N + Q), where N is the number of strings and Q is the number of queries.
- **Space:** O(N) for the frequency map.

Hash-table operations are expected O(1) average time.
