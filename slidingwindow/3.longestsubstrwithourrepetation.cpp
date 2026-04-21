class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> freq(256,0);
        int l = 0;
        int r = 0;
        int length = 0;

        for(int r=0; r<n; r++){
            freq[s[r]]++;

            while(freq[s[r]] > 1){ // for unique we use while and imp line
                freq[s[l]]--;
                l++;
            }
            length = max(length,r-l+1);
        }
        return length;
    }
};