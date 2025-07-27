class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = low + (high - low) / 2;

        while (low < high) {
            mid = low + (high-low)/2;
            //left sorted side
            if (nums[high] < nums[mid]) {
                low = mid+1;
            }
            //right side sorted
            else {
                high = mid;
            }
        }

        return nums[low];
    }
};