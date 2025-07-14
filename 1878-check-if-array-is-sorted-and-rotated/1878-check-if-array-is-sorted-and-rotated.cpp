class Solution {
public:
    bool check(vector<int>& nums) {
        
        int count = 0;
        if (nums.size() == 1){
            return true;
        }
        for (int i = 1; i < 2*nums.size(); i++){
            if (nums[i%nums.size()] < nums[(i-1)%nums.size()]){
                count++;
            }
           
    }
    if (count > 2){
        return false;
    }
    else {
        return true;
    }
    }
};