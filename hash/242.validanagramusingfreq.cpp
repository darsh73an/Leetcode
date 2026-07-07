class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        vector<int> freq(26,0); // size 26 initialize with 0

        for(int i=0; i<s.size(); i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        // for checking whether the freq vector is empty or not
        for(int i=0; i<26; i++){
            if(freq[i] != 0) return false;
        }
        return true;
    }
};


class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();

        int hash[26] = {0};

        //BC
        if(n1 != n2){
            return false;
        }

        // store freq
        for(int i=0; i<n1; i++){
            hash[s[i] - 'a']++;  // for storing the elements apperance to incremented
            hash[t[i] - 'a']--;  // we will decrement so if hash is nill then its anagram
        }

        //check is empty

        for(int i=0; i<26; i++){
            if(hash[i] != 0){
                return false;
            }
        }
        return true;
    }
};