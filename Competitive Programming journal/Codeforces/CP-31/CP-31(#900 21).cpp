// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define int long long

int minops(string s, string pos){
    int ops = 0;

    int idx = pos.size() -1;
    
    for(int i = s.size() - 1;i>=0;i--){
        if(s[i] == pos[idx]){
            idx--;
            if(idx < 0) break;
        } else {
            ops++;
        }
    }

    if(idx >= 0) ops = INT_MAX;

    return ops;
}

signed main() {
	int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        vector<string> posval = {"00","50","25","75"};
        int ans = INT_MAX;
        for(auto s : posval){
             ans = min(ans,minops(n,s));
        }
        cout << ans << '\n';

    }
}
