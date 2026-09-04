// Created By Aniket_a018 on 2026-09-04
// Problem - Change Schools
// URL - https://atcoder.jp/contests/abc473/tasks/abc473_c

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k; 
    cin>>n>>k;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    unordered_map<int,int> class_count;
    for(int x : a) class_count[x]++;

    int max_val = -1;
    int ans = 0;
    for(auto const& [classes, students] : class_count){
        if(students > max_val){
            max_val = students;
        }
    }
    for(auto const& [classes, students] : class_count){
        if((max_val - 1 == students) || students == max_val) ans++;
    }
    cout<<ans<<"\n";
    
    return 0;
}
