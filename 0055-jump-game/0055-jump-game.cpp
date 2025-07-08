class Solution {
public:
    bool canJump(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1; i++){
            if (nums[i] == 0){
                bool canJumpOver = false;
                for (int j = i; j >= 0; j--){ 
                    if(nums[j] >= i-j+1){
                        canJumpOver = true;
                        break;  // Found one position that works, no need to check others
                    }
                }
                if (!canJumpOver) {
                    return false;  // This zero cannot be jumped over
                }
            }
        }
        return true;
    }
};