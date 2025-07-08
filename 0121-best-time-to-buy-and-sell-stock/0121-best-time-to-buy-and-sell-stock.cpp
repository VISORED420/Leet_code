class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int hold = -prices[0]; 
        int sold = 0;          
        
        for (int i = 1; i < prices.size(); i++) {
            hold = max(hold, -prices[i]);           
            sold = max(sold, hold + prices[i]);
        }
        return sold;
    }
};