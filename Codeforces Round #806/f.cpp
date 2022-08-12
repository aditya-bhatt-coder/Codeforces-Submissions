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
        ll n,tp,ans=0; cin>>n;
        vector<ll> vp;
        vector<ll> v;
        for(int i=1 ; i<=n ; i++){
            cin>>tp;
            if(tp<i){
                vp.push_back(i);
                v.push_back(tp);
            }
        }
        sort(v.begin(),v.end());
        n = vp.size();
        for(int i=0 ; i<n ; i++){
            ans += v.size()-(lower_bound(v.begin(),v.end(),vp[i]+1)-v.begin());
        }
        cout<<ans<<'\n';
    }

    return 0;
}