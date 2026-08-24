// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        if(n == 1 || s[0] == s[n-1]){
            cout << s << '\n';
        } else{
            s[n-1] = s[0];
            cout << s << '\n';
}
    }
}