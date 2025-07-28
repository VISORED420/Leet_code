class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        long result = 0;
        bool negative = false;

        // Step 1: Skip leading whitespaces
        while (i < n && s[i] == ' ') i++;

        // Step 2: Check sign
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            negative = (s[i] == '-');
            i++;
        }

        // Step 3: Convert digits
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            result = result * 10 + (s[i] - '0');

            // Step 4: Clamp if out of bounds
            if (!negative && result > INT_MAX) return INT_MAX;
            if (negative && -result < INT_MIN) return INT_MIN;

            i++;
        }

        return negative ? -result : result;
    }
};
