// problem link
// https://www.codechef.com/problems/ALIENOR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int total = 0;
	    set<string> s;
	    while(n--){
	        string str;
	        cin >> str;

	        int count = 0;
	        for(char i : str){
	            if(i == '1')
	                count++;
	        }

	        if(count == 1){
	            s.insert(str);
	        }
	    }

	    if(s.size() == k){
	        cout << "YES\n";
	    }else{
	        cout << "NO\n";
	    }
	}

}
