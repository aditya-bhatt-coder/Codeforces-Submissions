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
        ll n,h;
        cin>>n>>h;
        vector<ll> a(n),d(n);
        for(ll &x : a)
            cin>>x;
        for(int i=0 ; i<n-1 ; i++)
            d[i] = a[i+1] - a[i];
        d[n-1] = LLONG_MAX;
        
        ll l=0,r=1e18,mid,sum=0;
        // cout<<l<<" "<<r<<'\n';
        while(l<r){
            mid = l+(r-l)/2;
            sum=0;
            for(int i =0 ; i<n ; i++){
                sum+=min(d[i],mid);
            }
            if(sum>=h){
                r = mid;
            } else{
                l = mid+1;
            }
        }
        cout<<r<<'\n';
    }

    return 0;
}