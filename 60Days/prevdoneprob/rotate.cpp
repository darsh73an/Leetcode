#include <iostream>
using namespace std;  // 0(n)TC  SC 0(1)
  // using swap

void reverse(int* arr,int st,int end){
    while(st < end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
void rotate(int* arr,int n,int k){

    k = k % n; // for k > n

    reverse(arr,0,n-1); // for whole arr rotating
    reverse(arr,0,k-1); // for k elements  and immp k elements always end at index k-1.
    reverse(arr,k,n-1); // for last elements rotating

    for(int i=0; i<n; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}


int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = sizeof(arr)/sizeof(int);
    int k = 7;

    rotate(arr,n,k);

    return 0;
}


//leetcode 
// class Solution {
// public:
//     void reverse(vector<int>& nums, int st, int end) {
//         while (st < end) {
//             swap(nums[st], nums[end]);
//             st++;
//             end--;
//         }
//     }

//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k % n;

//         reverse(nums, 0, n - 1);
//         reverse(nums, 0, k - 1);
//         reverse(nums, k, n - 1);
//     }
// };
