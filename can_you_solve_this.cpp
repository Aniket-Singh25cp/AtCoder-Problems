#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,c;
    cin>>n>>m>>c;
    vector<int> b(m);
    for(auto &it:b) cin>>it;
    int ans = 0;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i<n;++i){
        int c_sum = 0;
        for(int j=0;j<m;++j){
            c_sum += (a[i][j] * b[j]);
        }
        c_sum += c;
        if(c_sum > 0) ans++;
    }
    cout<<ans<<"\n";

    return 0;
}