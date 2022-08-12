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
        vector<int> a(n), b(n);
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        for(int i=0 ; i<n ; i++)
            cin>>b[i];

        for(int i=0 ; i<n-1 ; i++)
            ans += min(abs(a[i]-b[i+1])+abs(b[i]-a[i+1]),abs(a[i]-a[i+1])+abs(b[i]-b[i+1]));

        cout<<ans<<'\n';
    }

    return 0;
}