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
        ll x[3], y[3];
        cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2];
        
        if(y[0]==y[1] && y[0]!=0 && y[2]<y[0])
            cout<<abs(x[0]-x[1])<<'\n';

        else if(y[1]==y[2] && y[1]!=0 && y[0]<y[1])
            cout<<abs(x[1]-x[2])<<'\n';

        else if(y[0]==y[2] && y[2]!=0 && y[1]<y[2])
            cout<<abs(x[0]-x[2])<<'\n';

        else    cout<<0<<'\n';

    }

    return 0;
}