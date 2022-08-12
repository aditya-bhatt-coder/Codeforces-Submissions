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

    ll n,q;
    cin>>n>>q;
    vector<ll> p(n+1);
    for(int i=1 ; i<=n ; i++) cin>>p[i];
    sort(p.begin(),p.end());
    for(int i=1 ; i<=n ; i++)
        p[i] += p[i-1];
    while(q--){
        ll x,y;
        cin>>x>>y;
        cout<<p[n-x+y]-p[n-x]<<'\n';
        // for(int i=0 ; i<=n ; i++)
        //     cout<<p[i]<<' ';cout<<'\n';
    }

    return 0;
}