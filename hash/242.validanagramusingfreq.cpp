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