class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int i = s.size() - 1;

        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') i--;

            if (i < 0) break;

            int j = i;
            while (i >= 0 && s[i] != ' ') i--;

            result += s.substr(i + 1, j - i);

            result += ' ';
        }

        if (!result.empty()) result.pop_back();

        return result;
    }
};
