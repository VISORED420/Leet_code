class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>sh;
        unordered_map<char,int>th;
        for(int i=0;i<s.size();i++){
            sh[s[i]]++;
            th[t[i]]++;
        }
        if(sh==th){
            return true;
        }
        return false;
    }
};