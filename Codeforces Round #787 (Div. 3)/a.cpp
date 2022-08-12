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
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        x = max(x-a,0);
        y = max(y-b,0);
        if(c>=x+y)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}