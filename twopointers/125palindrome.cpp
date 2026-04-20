class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0){
            return true;
        }

        int st = 0 , end = s.size() - 1;

        while(st < end){

            while( st<end && !isalnum(s[st])) st++;
            while( st<end && !isalnum(s[end])) end--;

            // alnum means alphanumeric it skips it bcoz we dont need to cmp ;";,"  ?"

            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++;
            end--;
        }
      return true;
    }
};