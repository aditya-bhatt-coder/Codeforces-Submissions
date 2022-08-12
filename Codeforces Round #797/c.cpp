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
        ll n,time=0; cin>>n;
        vector<ll> s(n),f(n), ans;
        for(ll &x : s)
            cin>>x;
        for(ll &x : f)
            cin>>x;
        
        for(int i=0 ; i<n ; i++){
            if(i==0)
                ans.push_back(f[i]-s[i]);
            else{
                int a = max(int(f[i]-time),0);
                int b = f[i]-s[i];
                // cout<<a<<" "<<b<<'\n';
                ans.push_back(min(a,b));
            }
            time = f[i];
        }
        for(int i=0 ; i<n ; i++)
            cout<<ans[i]<<" ";
        cout<<'\n';
    }

    return 0;
}