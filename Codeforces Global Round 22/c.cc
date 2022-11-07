//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        ll n,e=0,o=0; cin>>n;
        vector<ll> a(n);
        
        for(ll &x : a){
            cin>>x;
            if(x%2==0)
                e++;
            else
                o++;
        }

        if(o%4==0 or o%4==3)
            cout<<"Alice"<<'\n';
        else if((e%4==1 or e%4==3) and (o%4==1))
            cout<<"Alice"<<'\n';
        else
            cout<<"Bob"<<'\n';
    }

    return 0;
}