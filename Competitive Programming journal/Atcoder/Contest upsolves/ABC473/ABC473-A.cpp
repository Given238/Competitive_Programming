// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = n/2;i<n;i++){
        cnt += a[i];
    }
    cout << cnt << '\n';
}
