#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        ll mf=0,ans=0;
        map<ll,ll> m;

        for(int i=0 ; i<n ; i++){
            ll t; cin>>t;
            m[t]++;
            if(m[t]>mf)
                mf = m[t];
        }

        while(mf<n){
            // cout<<mf<<" "<<ans<<'\n';
            if(mf*2 <= n){
                ans += mf+1;
                mf *= 2;
            }
            else{
                // cout<<mf<<" "<<ans<<'\n';
                ans += (n-mf) +1;
                break;
            }
        }

        cout<<ans<<'\n';
    }

    return 0;
}