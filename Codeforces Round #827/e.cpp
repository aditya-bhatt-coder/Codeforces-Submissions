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
        int n,q;
        cin>>n>>q;

        vector<ll> a(n);
        for(ll &x : a)cin>>x;

        vector<ll> pre(n+1,0);
        for(int i=0 ; i<n ; i++)pre[i+1] = pre[i]+a[i];

        ll mx = 0;
        for(int i=0 ; i<n ; i++){
            a[i] = max(mx,a[i]);
            mx = a[i];
        }

        map<ll,ll> m;
        for(int i=0 ; i<n ; i++){
                m[a[i]] = pre[i+1];
        }
        // cout<<"\nCHECKPOINT\n";

        vector<ll> h;
        for(auto it : m){
            h.push_back(it.first);
        }

        for(int i=0 ; i<q ; i++){
            ll k;
            cin>>k;

            if(k<h[0]){
                cout<<0<<" ";
                continue;
            }
            if(k==h[0]){
                cout<<m[k]<<" ";
                continue;
            }
            auto ub = upper_bound(a.begin(),a.end(),k);
            
            int ind = ub - a.begin();
            cout<<pre[ind]<<" ";
        }

        cout<<'\n';
    }

    return 0;
}