class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
          int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int answer = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canEatAll(piles, h, mid)) {
                answer = mid;      // Try to minimize k
                right = mid - 1;
            } else {
                left = mid + 1;    // Need to eat faster
            }
        }

        return answer;
    }
     bool canEatAll(const vector<int>& piles, int h, int k) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + k - 1) / k;  // Efficient ceil(pile / k)
        }
        return hours <= h;
    }
};