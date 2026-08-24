// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n,m;
    cin >> n >> m;
    int g = __gcd(n,m);
    cout << ((n*m)/(g*g)) * (2*g + 1);
}
