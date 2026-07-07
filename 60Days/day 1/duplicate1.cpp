class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>mp;

        // here i is not index it actual elements and it auto increments
        // i -> 1,2,3,1
        //i->1 , i->2 , i->3 , i->1
        for(int i : nums){
            if(mp.find(i) != mp.end()){  // to check if the element exists
                return true;
            }
            mp.insert(i);
        }
        return false;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;

            if(mp[nums[i]] > 1){
            return true;
            }
        }
        return false;
    }
};


