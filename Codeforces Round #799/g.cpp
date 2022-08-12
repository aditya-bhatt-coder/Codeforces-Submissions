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
        vector<ll> arr(n), a(n);
        for(ll &x : arr)
            cin>>x;
        // for(int i=0 ; i<n ; i++)
        //     cout<<arr[i]<<" ";
        // cout<<'\n';
        for(int i=1 ; i<n ; i++)
            a[i] = arr[i]*2>arr[i-1] ? 1 : 0;
        // for(int i=0 ; i<n ; i++)
        //     cout<<a[i]<<" ";
        // cout<<'\n';
        for(int i=1 ; i<n ; i++)
            a[i] += a[i-1];
        // for(int i=0 ; i<n ; i++)
        //     cout<<a[i]<<" ";
        // cout<<'\n';
        for(int i=k ; i<n ; i++){
            // cout<<a[i]-a[i-k]<<" ";
            if(k==a[i]-a[i-k])
                ans++;
        }
        cout<<ans<<'\n';
    }

    return 0;
}