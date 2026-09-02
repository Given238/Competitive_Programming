// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
    cin >> n >> k;
    vector<int> a(n);
    map<int,int> freq;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        freq[a[i]]++;
    }
    int mx = 0;
    for(auto pair : freq){
        mx = max(mx,pair.second);
    }
    int cnt = 0;
    for(auto pair : freq){
        if(pair.second + 1 >= mx){
            cnt++;
        }
    }
    cout << cnt << '\n';

}
