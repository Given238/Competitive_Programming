// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t;
    cin >> t;
    while(t--){
        int x0,n;
        cin >> x0 >> n;
        int tmp;
        if(n % 4 == 0){
            tmp = 0;
        } else if (n % 4 == 1){
            tmp = -n;
        } else if (n % 4 == 2){
            tmp = 1;
        } else if(n % 4 == 3){
            tmp = n + 1;
        }

        if(x0 % 2 == 0){
            tmp = x0 + tmp;
        } else {
            tmp = x0 - tmp;
        }
        cout << tmp << '\n';
    }
}
