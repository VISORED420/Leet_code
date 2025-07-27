class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
  int low = 0;
        int high = nums.size() - 1;
        int mid = 0;
        while (low < high) {

            if (mid % 2 == 1) {
                mid--;
            }

            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            } else {
                high = mid;
            }
            mid = low + (high - low) / 2;

        }

        return nums[mid];
    }
};