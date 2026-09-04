// Created By Aniket_a018 on 2026-09-04
// Problem - Second Half Sum
// URL - https://atcoder.jp/contests/abc473/tasks/abc473_a

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> a(n);
    for(auto &it:a ) cin>>it;
    int mid = n/2;
    int sum = 0;
    for(int i = mid; i<n;i++){
        sum += a[i];
    }
    cout<<sum<<"\n";
    return 0;
}
