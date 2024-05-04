// problem link
// https://codeforces.com/problemset/problem/731/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;

    int total = 0, n = str.length();
    char ch = 'a';

    for(int i = 0;i < n;i++){
        int val1 = ch - str[i];
        if(val1 < 0){
            val1 *= -1;
        }

        int val2 = 26 - val1;

        if(val1 > val2){
            total += val2;
        }else{
            total += val1;
        }

        ch = str[i];
    }

    cout << total << endl;
}
