class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closestSum = nums[0] + nums[1] + nums[2];
        // calc base closest sum for target

        // n-2 bcoz when i will be n-2 then we can calc last two remaaning elements
        for(int i=0; i<nums.size()-2; i++){
            int left = i+1;
            int right = nums.size()-1;

            while(left < right){
                int sum = nums[left] + nums[i] + nums[right];

                // abs means absolute values it is likke mod - -> +
                if(abs(target - sum) < abs(target - closestSum)){
                    closestSum = sum;
                }

                if( sum > target ){
                    right--;
                }else if( sum < target ){
                    left++;
                }else{ // target
                    return sum;
                }
            }
        }
        return closestSum;
    }
};