class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1, r = *max_element(nums.begin(), nums.end());
        int ans = r;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            long thres = 0;

            for (int p : nums)
                thres += (p + mid - 1) / mid;

            if (thres <= threshold) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;

    }
};