# Time Conversion

**Topic:** Strings & Logic

### Approach
Read the hour and AM/PM marker. Convert `12 AM` to hour `00`; for PM, add 12 unless the hour is already `12`. Preserve the minutes and seconds.

### Complexity
- **Time:** O(1), because the input timestamp has fixed length.
- **Space:** O(1).
