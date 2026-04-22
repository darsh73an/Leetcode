class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() -1;

        while( l < r ){
            int mid = l + (r-l) / 2;

            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){ // left
                r = mid-1;
            }else{ // right 
                l = mid+1;
            }
        }
        return -1;
    }
};