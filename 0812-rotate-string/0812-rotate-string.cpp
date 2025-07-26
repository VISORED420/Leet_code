class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }

        for (int i = 0; i < goal.size(); i++) {
            // Rotate goal by i positions
            string rotated = goal.substr(i) + goal.substr(0, i);
            if (rotated == s) {
                return true;
            }
        }

        return false;
    }
};
