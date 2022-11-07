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
        ll n;cin>>n;
        int ans = n;
        vector<ll> a(n), pref(n+1);

        for(ll &x : a)
            cin>>x;

        for(int i=0 ; i<n ; i++)
            pref[i+1] = a[i] + pref[i];

        for(int i=1 ; i<=n ; i++){
            int sz = i;
            ll rsum = pref[i];
            ll sum = 0;
            int ctr = 0;
            bool c = true;

            for(int j=i ; j<n ; j++){
                ctr++;
                sum+=a[j];
                if(rsum==sum){
                    sz = max(sz,ctr);
                    ctr = 0;
                    sum = 0;
                }
                if(rsum<sum){
                    bool c = false;
                    break;
                }
            }

            if(c and sum==0)
                ans = min(ans, sz);
        }

        cout<<ans<<"\n";
    }

    return 0;
}