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
        int n,m;
        cin>>n>>m;
        ll ans = 0;
        for(int i=1 ; i<=m ; i++)
            ans+=i;
        // cout<<ans<<'\n';
        for(int i=2 ; i<=n ; i++)
            ans+=m*i;
        cout<<ans<<'\n';
    }

    return 0;
}