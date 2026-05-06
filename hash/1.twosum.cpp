class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Two sum using best approach HashMap
        unordered_map<int,int> mp; //idx,value

        for(int i=0; i<nums.size(); i++){
            int need = target - nums[i];

            if(mp.count(need)){
                return {mp[need],i};
            }
            // we are storing the idx in mp until we found a need
            mp[nums[i]] = i;
            //  2 -> 0
            //  7 -> 1
        }
        return {};
    }
};