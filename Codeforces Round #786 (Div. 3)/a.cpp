#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        if(y%x==0)
            cout<<"1 "<<y/x<<'\n';
        else
            cout<<"0 0\n";
    }

    return 0;
}