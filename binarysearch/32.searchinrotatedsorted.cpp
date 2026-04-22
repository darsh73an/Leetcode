class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;

        while( l <= r){
            int mid = l + (r-l) / 2;

            if(nums[mid] == target){      // got
                return mid; 
            }
            else if(nums[l] <= nums[mid]){ // left
                if(nums[l] <= target && target < nums[mid]){ // no <= for mid bcoz already checked
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
            else{                          // right
                if(nums[mid] <= target && target <= nums[r]){
                    l = mid + 1;
                }else{
                    r = mid - 1;
                }
            }
        }
        return -1;
    }
};