class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>val;
        val['I']=1;
        val['V']=5;
        val['X']=10;
        val['L']=50;
        val['C']=100;
        val['D']=500;
        val['M']=1000;

        int sum = 0;

        for(int i = 0; i<s.size(); i++){
            if(val[s[i]] < val[s[i+1]]){
                sum = sum - val[s[i]];
            }else{
                sum = sum + val[s[i]];
            }
        }

        return sum;

    }
};