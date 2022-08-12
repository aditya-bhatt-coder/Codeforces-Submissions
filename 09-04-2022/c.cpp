#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        ll ans=0;
        vector<int> h(n);
        for(int i=0 ; i<n ; i++)
            cin>>h[i];
        
        sort(h.begin(),h.end());
        int t = h[n-1];

        for(int i=0 ; i<n ; i++){
            ans+=(((t-h[i])/3)*2);
            h[i] = (t-h[i])%3;
        }

        cout<<ans<<'\n';
    }

    return 0;
}