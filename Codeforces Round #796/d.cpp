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

    int t;
    cin>>t;
    while(t--){
        //init, input and population
        ll n,k; cin>>n>>k;
        vector<ll> a(n+1);
        for(int i=1 ; i<=n ; i++){
            ll temp;
            cin>>temp;
            a[i] = a[i-1]+temp;
        }
        ll ms=0,ans=0;
        if(n>=k){
            for(int i=k ; i<=n ; i++){
                ms = max(ms, a[i]-a[i-k]);
            }
            ans = ms;
            ans += (k*(k-1))/2;
        } else{
            ans = a[n];
            ans += n*(2*k-n-1)/2;
        }
        cout<<ans<<'\n';
    }

    return 0;
}