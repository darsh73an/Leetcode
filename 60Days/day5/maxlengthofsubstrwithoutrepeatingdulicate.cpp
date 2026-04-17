class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> freq(256,0); //ASCII only lowcase letters
        int left = 0;// for removing first duplicate ele to get maxLength
        int right = 0;// for traversing and getting maxLength of subArr
        int maxLength = 0;

        for(int right=0; right<n; right++){
            freq[s[right]]++;

            while(freq[s[right]] > 1){
                freq[s[left]]--;
                left++;
            }
            maxLength = max(maxLength,right-left+1);
        }
    return maxLength;
    }
};