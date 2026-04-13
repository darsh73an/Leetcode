class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j = 0; 

        //j pointer for replacing the unique element by j++
        //i pointer for finding the unique element

        for(int i=1; i<n; i++){
            if(nums[i] != nums[j]){
                j++;
                nums[j] = nums[i]; // here nums[i] means next unique element and j++ remember j++ means second duplicate value less than curr
            }
        }
        return j+1;
    }
};