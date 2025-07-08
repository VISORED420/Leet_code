class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> bhappa_lehri;
        int n = nums.size();
        for (int i = 0; i<nums.size(); i++){
            bhappa_lehri[nums[i]]++;
            
         }

         for (auto it : bhappa_lehri){
            if (it.second > n/2){
                return it.first;
            }
            
        }
        
        
        return 0;
       
    }
};