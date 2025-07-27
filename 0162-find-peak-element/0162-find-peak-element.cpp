class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int low = 0;
     int high = nums.size()-1;

     while(low<high){
        int mid = low + (high -low)/2;
         if (nums[mid] < nums[mid+1]){
            //peak on right side
            low = mid+1;
        } else{
            //peak on left side
            high = mid;
        }
     }
     return low;
    }
};