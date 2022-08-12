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
        ll n,x,ans=0;
        cin>>n>>x;
        vector<ll> a(n);
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        //sorting
        sort(a.begin(),a.end());
        //calc prefix sum
        for(int i=1 ; i<n ; i++)
            a[i] = a[i]+a[i-1];

        while(a[0]<=x){
            auto ub = upper_bound(a.begin(),a.end(),x);
            ll f = ub-a.begin();
            ll ap = ((x-a[f-1])/f)+1;
            ans += f*ap;
            for(int i=0 ; i<n ; i++){
                cout<<a[i]<<" ";
                a[i]+=(i+1)*ap;
            }
            cout<<'\n';
        }
        cout<<ans<<'\n';
    }

    return 0;
}