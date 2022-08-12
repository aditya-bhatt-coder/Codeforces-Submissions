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
        ll n,k,ans=0; cin>>n>>k;
        vector<ll> a(n);
        for(ll &x : a){
            cin>>x;
            ans+=x/k;
            x%=k;
        }
        sort(a.begin(),a.end());
        ll i=0,j=n-1;
        while(i<j){
            if(a[i]+a[j]>=k){
                ans++;
                i++;
                j--;
            } else{
                i++;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}