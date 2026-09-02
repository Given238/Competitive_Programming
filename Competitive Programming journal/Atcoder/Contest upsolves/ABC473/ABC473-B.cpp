// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    map<int,int> freq;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        freq[x]++;
    }
    int cnt = 0;
    for(auto pair : freq){
        if(pair.second % 2 != 0){
            cnt += pair.first;
        }
    }
    cout << cnt << '\n';
    
}
