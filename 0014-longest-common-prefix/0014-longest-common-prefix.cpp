class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first=strs[0];
        string result="";
        for(int i=0;i<first.length();i++){
            char currentChar=first[i];
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].length() || strs[j][i]!=currentChar){
                    return result;
                }
            }
            result+=currentChar;
        }
        return result;
    }

};