// first store the freq of whole magazine
// then decrement he chars in raqnsomnote 

// if thier is any another char in magazine it will be ++ and ransomNote be -- so < 0 false

class Solution {

public:
    bool canConstruct(string ransomNote, string magazine) {
       if(magazine.size() < ransomNote.size() ||
          magazine.size() == 0){
        return false;
       }

       int freq[26] = {0};


        for(char i : magazine){
            freq[i - 'a']++;
        }

          for(char i : ransomNote){
            freq[i - 'a']--;

            if(freq[i - 'a'] < 0){
                return false;
            }
        }
       
    return true;
    }
};