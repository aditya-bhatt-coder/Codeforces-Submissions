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
        ll n, x, ans=0;
        cin>>n>>x;
        vector<ll> v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        ll mn=v[0],mx=v[0];
        x*=2;
        for(int i=1 ; i<n ; i++){
            ll d1 = abs(mn-v[i]);
            ll d2 = abs(mx-v[i]);
            if(d1>x or d2>x){
                ans++;
                mn = v[i];
                mx = v[i];
            }
            else{
                if(v[i]>mx)
                mx = v[i];
                if(v[i]<mn)
                mn = v[i];
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}