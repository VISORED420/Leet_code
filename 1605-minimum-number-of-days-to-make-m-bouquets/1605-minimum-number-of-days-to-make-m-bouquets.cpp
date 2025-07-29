class Solution {
public:
    bool possibleMin(vector<int>& bloomDay, int& days, int& m, int& k) {
        int flowers = 0, bouquets = 0;
        for (int i : bloomDay) {
            if(bouquets >= m) return true;
            if (i <= days)
                flowers++;
            else {
                bouquets += (flowers / k);
                flowers = 0;
            }
        }
        bouquets += (flowers / k);
        return bouquets >= m;
    }
    int minDays(vector<int>& bloomDay, int& m, int& k) {
        int low = INT_MAX, high = INT_MIN, mid;
        if (m * 1LL * 1LL * k > bloomDay.size())
            return -1;
        for (int i : bloomDay) {
            // maximum no of days
            high = max(i, high);
            // minimum no of days
            low = min(i, low);
        }
        if (m * k == bloomDay.size())
            return high;

        while (low <= high) {
            mid = low + (high - low) / 2;
            if (possibleMin(bloomDay, mid, m, k))
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};
