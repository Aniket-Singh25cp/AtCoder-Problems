// Created By Aniket_a018 on 2026-09-04
// Problem - Old Maid
// URL - https://atcoder.jp/contests/abc473/tasks/abc473_b

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    unordered_map<int,int> m;
    for(int x : a) m[x]++; 
    int ans = 0;

    for(auto const& [num, count] : m){
        if(count % 2 != 0) ans += num;
    }
    cout<<ans<<"\n";

    return 0;
}
