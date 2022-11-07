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
        ll n; cin>>n;

        vector<ll> v(n), ans;

        for(ll &x : v)cin>>x;

        ll cor = 0;

        for(int i=0 ; i<min(n,31ll) ; i++){
            ll t = cor, bestind = -1;

            for(int j=0 ; j<n ; j++){
                if(v[j] == -1)
                    continue;
                if(cor|v[j] >= t){
                    t = cor|v[j];
                    bestind = j;
                }
            }

            cor = cor | v[bestind];
            ans.push_back(v[bestind]);
            v[bestind] = -1;
        }

        for(int i=0 ; i<n ; i++){
            if(v[i]!=-1)
                ans.push_back(v[i]);
        }

        for(int i=0 ; i<n ; i++)
            cout<<ans[i]<<" ";
        
        cout<<'\n';
    }

    return 0;
}