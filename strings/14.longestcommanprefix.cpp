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


str1.find(str2) → searches str2 inside str1
Returns the starting index of str2
== 0 → str2 is at the beginning
!= 0 → str2 is not at the beginning
Not found → returns string::npos

Remember: find(str2) != 0 → str2 should not start at 0th index.