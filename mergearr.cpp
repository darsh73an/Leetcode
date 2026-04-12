#include <iostream>
using namespace std;

void mergeNum(int* num1,int* num2,int n,int m){

    int i = n-1;
    int j = m-1;
    int k = m+n-1;

    while(i>=0 && j>=0){

        if(num1[i] > num2[j]){
            num1[k] = num1[i]; // placing large element in num1[k] ie last
            i--;
        }
        else{
            num1[k] = num2[j];
            j--;
        }
        k--;
    }

    while(j>=0){
        num1[k] = num2[j];
        j--;
        k--;
    }
}

int main() {

    int num1[6] = {1,2,3};   // extra space
    int n = 3;

    int num2[] = {4,5,6};
    int m = 3;

    mergeNum(num1,num2,n,m);

    for(int i=0; i<m+n; i++){
        cout << num1[i] << ",";
    }

    return 0;
}