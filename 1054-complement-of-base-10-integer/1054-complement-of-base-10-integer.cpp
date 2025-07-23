class Solution {
public:
    int bitwiseComplement(int n) {
        
         int i = 0;
        int sum =0;
      if (n != 0){
      for ( ; n != 0;n = n/2,i++){
          if (n%2 == 0){
            sum = sum + pow(2,i);
          }
      }  
      return sum;}
      else {
          return 1;
      }
    }
};