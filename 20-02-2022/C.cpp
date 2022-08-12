#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll r[3],v[3],d[3],n;
        cin>>r[0]>>r[1]>>r[2];
        cin>>v[0]>>v[1]>>v[2];
        cin>>n;

        d[0] = (v[0]*n)%360;
        d[1] = (v[1]*n)%360;
        d[2] = (v[2]*n)%360;

        if(d[0]==d[1] && d[1]==d[2])
            cout<<"TRUE\n";
        else    cout<<"FALSE\n";

    }

    return 0;
}