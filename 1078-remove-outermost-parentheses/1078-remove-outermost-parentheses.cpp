class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int count = 0;

        for (char c : s) {
            if (c == 40) {
                if (count > 0) result += c;
                count++;
            } else {
                count--;
                if (count > 0) result += c;
            }
        }

        return result;
    }
};
