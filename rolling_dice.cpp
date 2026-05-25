//problem no. - 208A
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;

    if(b <= (6*a) && b >= (1*a)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}