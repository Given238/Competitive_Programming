// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
// DSU + Path Compression & optimization on sizes
// KC Weekend 06/09/26
// Given Jonathan


const int MAXN = 100005;

int par[MAXN];
int sz[MAXN];

void ccawal(int n){
    for(int i = 1;i<=n;i++){
        par[i] = i;
        sz[i] = 1;
    }
}

int find(int x){
    if(par[x] == x) return x;

    return par[x] = find(par[x]);
}

void join(int a,int b){
    int awala = find(a);
    int awalb = find(b);


    if(sz[awala] < sz[awalb]){
        swap(awala,awalb);
    }
    par[awalb] = awala;

    sz[awala] += sz[awalb];
}

bool check(int a,int b){
    return find(a) == find(b); 
}



int main() {
    int n,q;
    cin >> n >> q;
    ccawal(n);
    while(q--){
        int tipe,a,b;
        cin >> tipe >> a >> b;
        if(tipe == 1){
            join(a,b);
        } else if (tipe == 2){
            if(check(a,b) == 1) cout << "Y" << '\n';
            else if(check(a,b) == 0) cout << "T" << '\n';
        }
    }
}
