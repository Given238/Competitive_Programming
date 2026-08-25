// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t;
    cin >> t;
    while(t--){
        vector<int> a(3);
        int mx = 0;
        for(int i = 0;i<3;i++){
            cin >> a[i];
            mx = max(mx,a[i]);
        }
        int n;
        cin >> n;
        int diff = 0;
        for(int i  = 0;i<3;i++){
            diff += mx - a[i];
        }
        if((n - diff) % 3 == 0 && n >= diff){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}
