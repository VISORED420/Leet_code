class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) return false;

        int original = x;
        int remainder = 0;
        int reversedNum = 0;

        while (x != 0) {
            remainder = x % 10;
            if (reversedNum > (INT_MAX - remainder) / 10) return false;

            reversedNum = reversedNum * 10 + remainder;
            x /= 10;
        }

        return reversedNum == original;
    }
};
