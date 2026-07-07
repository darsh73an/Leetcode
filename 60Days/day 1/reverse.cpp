#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);


    int k = 3;
    k = k % n; // in case k is greater than n

    // for whole arr reverse
    reverse(arr,arr+n);

    // for reverse last 3 leave elements
    reverse(arr,arr+n-3);  // before arr+n-3 it will be reversed not arr+n-3

    //for reverseing 3 elements
    reverse(arr+n-3,arr+n);


    // for (int i = 0; i < n-2; i += 2) {
    //     swap(arr[i], arr[i + 1]);
    // }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}











 //  cout << "firsthalf:";
    // // for first half
    // for (int l = 0, r = n / 2 - 1; l < r;) {
    //     swap(arr[l++], arr[r--]);
    // }

    //  for (int x : arr) {
    //     cout << x << " ";
    // }

        // //for 2nf half
        // for(int l = n/2, r = n-1; l < r;){
        //     swap(arr[l++], arr[r--]);
        // }

    //     cout << "secondhalf" << endl;
    // for (int x : arr) {
    //     cout << x << " ";
    // }














    // int l = 0;

    // // Last odd index
    // int r = n-1;

    // if (r % 2 == 1)
    //     r = n - 1;

    // while (l < r) {
    //     swap(arr[l], arr[r]);
    //     l += 2;
    //     r -= 2;
    // }
