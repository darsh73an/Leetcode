#include<iostream>
using namespace std;

int main() {

    string s = "ABC";
    string s2 = "ABC";

    cout << (s == s2) << endl;

    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
    }

     for(char i : s){
        cout << i << " ";
    }
    cout << endl;

     for(int i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
    }

    for(char i : s){
        cout << i << " ";
    }
    cout << endl;


    string s3 = "iuweh f u efwuo hewf ewfu uwefuh";

    int count = 0;
    for(char i : s3){
        if(i == ' '){
            count ++;
        }
    }

    cout << count << endl;


   string s4 = "stringg";

    s4.erase(0, 1);              // remove 1st character
    s4.erase(s4.size() - 1, 1);  // remove last character

    cout << s4 << endl;

     string s5 = "stringg";

    string ans = "";
    for(int i=1; i<s5.size()-1; i++){
        ans += s5[i];
    }

    cout << ans << endl;

    string s6 = "    string with spaces    ";
    int start = 0;
    int end = s6.size() - 1;

    while(start <= end && s6[start] == ' '){
        start++;
    }

    while(start <= end && s6[end] == ' '){
        end--;
    }

    for(int i=start; i<=end; i++){
        cout << s6[i];
    }
    cout << endl;

    string s7 = "gnirts";
     int l = 0;
        int r = s7.size() - 1;
    
    for(int i=0; i<s7.size(); i++){
       

       while(l < r){
         swap(s7[l++], s7[r--]);
       }
    }

    cout << s7 << endl;
       
    string s8 = "FDeFTrFyjn";

    for(int i = 0; i < s8.size(); i++) {


    if (i % 2 == 0) {
        if (s8[i] >= 'a' && s8[i] <= 'z') {
            s8[i] = s8[i] - 32;
        }
    }

    
    else {
        if (s8[i] >= 'A' && s8[i] <= 'Z') {
            s8[i] = s8[i] + 32;
        }
    }
}

cout << s8 << endl;

 return 0;
    }
   

// A-65
// a-97