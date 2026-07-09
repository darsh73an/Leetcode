class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for(int i=1; i<strs.size(); i++){

            while(strs[i].find(prefix) != 0){
                // str[i].find(prefix) compares both strings 

                prefix.pop_back();  // this is for removing last non comman char from string[i]

                if(prefix.empty()){
                    return "";
                }
            }
        }
        return prefix;
    }
};