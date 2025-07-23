class Solution {
public:
    int findComplement(int num) {
        int i = 0;
        int sum =0;
      for ( ; num != 0;num = num/2,i++){
          if (num%2 == 0){
            sum = sum + pow(2,i);
          }
          
          
      }  
      return sum;
    }
};