













// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int ans = 0;

//         for (int i = 0; i <= n; i++) { // we run this for verifying all the elements 0,1,2,3,4 and in another forloop which is missing ie misssing
//             ans ^= i;
//             /*
//             i = 0 → ans = 0 ^ 0 = 0
//             i = 1 → ans = 0 ^ 1 = 1
//             i = 2 → ans = 1 ^ 2 = 3   (01 ^ 10 = 11) ie 3
//             i = 3 → ans = 3 ^ 3 = 0   (number cancels itself)
//             */
//         }

//         for (int x : nums) {  // we run and get final ans ie is the misssing element
//             ans ^= x;
//             /*
//             x = 3 → ans = 0 ^ 3 = 3
//             x = 0 → ans = 3 ^ 0 = 3
//             x = 1 → ans = 3 ^ 1 = 2
//             */
//         }

//         return ans; // ans = 2 → missing number
//     }
// };

/// the final answer of the ans is the missing number bczo all the numbers will get cancelled

// xor for only single appearing numbers and to find missing

//we cal from i range and in nums in both if a number appeares in both then its not missing if a number
//appeares in i and its missing or its 0 in nums then its missing
