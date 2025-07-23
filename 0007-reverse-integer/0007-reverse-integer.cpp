class Solution {
public:
    int reverse(int x) {
            int a;
            
            int b = x;
            int t = 0;
            
            while (x!=0){
            
            if (t>INT_MAX/10||t<INT_MIN/10){
                return 0;
            }

                a = x%10;
                
                t=t*10 + a;
            
                x = x/10;
            }
            
            return t;
    }
};