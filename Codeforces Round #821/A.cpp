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
        int n,k;
        cin>>n>>k;

        vector<ll> v(k);
        for(int i=0 ; i<n ; i++){
            ll t; cin>>t;
            v[i%k] = max(v[i%k],t);
        }

        ll ans = 0;
        for(int i=0 ; i<k ; i++)
            ans+=v[i];

        cout<<ans<<'\n';
    }

    return 0;
}