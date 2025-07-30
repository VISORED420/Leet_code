class Solution {
public: 
     
    int longestConsecutive(vector<int>& nums) {
         int n = nums.size();
         if(n==0)
         return 0;
         sort(nums.begin(),nums.end());
         int largest = 1;
         int count=1;
         int lastsmall = INT_MIN;
         for(int i =0;i<n;i++)
         {
            if(nums[i]-1==lastsmall)
            {
                count = count+1;
                lastsmall = nums[i];
            }
            else if(nums[i]!=lastsmall)
            {
                count = 1;
                lastsmall = nums[i];
            }
         
            largest = max(largest,count);

         }
         return largest;
     }
};
