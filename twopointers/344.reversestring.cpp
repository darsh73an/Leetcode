class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size()-1;

        unordered_set<char> vowels = {
            'a','e','i','o','u',
            'A','E','I','O','U'
        };

        while(left<right){
            while(left<right && vowels.find(s[left]) == vowels.end()){
                                                        // vowels.end() means not found so left++
                left++;
            }
            while(left<right && vowels.find(s[right]) == vowels.end()){
                right--;
            }

            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};