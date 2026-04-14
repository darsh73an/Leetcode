class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, zeros = 0;
        int maxLen = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] == 0) zeros++;

            while (zeros > k) {
                if (nums[left] == 0) zeros--; // if one then just left++ find left 0 and remove it
                left++;
            }

            maxLen = max(maxLen, right - left + 1); // bcoz of 0th idx
        }

        return maxLen;
    }
};