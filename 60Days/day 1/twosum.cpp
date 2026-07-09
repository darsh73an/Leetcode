class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
      unordered_map<int,int> mp;
      int n = arr.size();

      for(int i=0; i<n;i++){
            int needed = target - arr[i];

            if(mp.find(needed) != mp.end()){ // if true the ele exists
                return {mp[needed],i};  // needed means value so mp[needed] returns idx
            }

            mp[arr[i]] = i;
      }
      return {};
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
       
      // using two pointer

       //1 store in arr vector
       vector<pair<int,int>> arr;
       for(int i=0; i<n; i++){
            arr.push_back({nums[i],i}); // stores index and num of nums
                         //{} if no then only single element is added to arr
       }

       //2 sort
       sort(arr.begin(),arr.end());

       //3 take two pointers
       int st = 0 , end = n-1;

       while(st < end){
            int sum = arr[st].first + arr[end].first;

            if(sum == target){
                return {arr[st].second , arr[end].second};
            }else if ( sum < target ){ // 6 < 9
                st++;
            }else{
                end--; //if sum > target
            }
       }
       return {};
    }
};




