#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n; cin>>n; ll a[n];
        for(ll i=0 ; i<n ; i++)
            cin>>a[i];
        
        if(n==3 && a[1]%2){
            cout<<"-1\n";
            continue;
        }
        
        ll k=1;
        while(k<n-1 && a[k]==1) k++;
        if(k==n-1){
            cout<<"-1\n";
            continue;
        }

        ll ans=0;
        for(ll i=1 ; i<n-1 ; i++)
            ans+=(a[i]+1)/2;

        cout<<ans<<"\n";

    }

    return 0;
}