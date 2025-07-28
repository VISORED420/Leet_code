class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        string ans="";
        while(ans.length()<s.length()){
            char maxChar=' ';//stores max character
            int maxFreq=0;//stores max frequency of max character

            for(auto it : mpp){
                if(it.second>maxFreq){
                    maxFreq=it.second;
                    maxChar=it.first;
                }
            }
            for(int i=0;i<maxFreq;i++){
                ans+=maxChar;
            }
            mpp[maxChar]=0;//skips the max character jo hamne use krdia entirely
        }
        return ans;
    }
};