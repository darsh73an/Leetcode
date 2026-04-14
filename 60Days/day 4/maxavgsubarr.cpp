class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      int n = nums.size();

    // 0-k elements sum means 1st k ele sum
      int prevSum = 0; 
      for(int i=0; i<k; i++){
        prevSum += nums[i];
      }  

    int firstSum = prevSum;
    // sliding window
    for(int i=k; i<n; i++){ // start from k bcoz loop starts with 0 
        prevSum += nums[i] - nums[i-k];
        maxSum = max(prevSum,firstSum);
    }
    return (double)maxSum/k;
    }
};