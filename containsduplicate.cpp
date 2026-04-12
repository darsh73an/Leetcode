// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> set;

//         for(int i : nums){  // element value
//             if(set.count(i)){;  // for ol and ul it return true if ele is present
//             return true;
//         }
//         set.insert(i);     // this for inserting in set
//     }
//     return false;
//     }
// };