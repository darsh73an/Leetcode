class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int subArrCount = 0 , sum = 0 ;
        int target = k * threshold;//ignoring avg and chosing alternate

        //first window
        for(int i=0; i<k; i++){
            sum += arr[i];
        }
        if(sum >= target) subArrCount++;

        // for full arr it calculates all whole sum
        for(int i=k; i<n; i++){
            sum += arr[i]; // adding next element in prev window in right
            sum -= arr[i-k]; // i-k means st ele of window that we have to remove

            if(sum >= target) subArrCount++;
        }
        return subArrCount;
    }
};