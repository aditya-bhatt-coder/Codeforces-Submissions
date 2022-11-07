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

    int tc;
    cin>>tc;
    while(tc--){
        int n,ans=INT_MAX;
        cin>>n;
        vector<int> a(n);
        for(int &x : a)cin>>x;

        sort(a.begin(),a.end());

        for(int i=0 ; i<n-2 ; i++){
            ans = min(ans, a[i+1]-a[i] + a[i+2]-a[i+1]);
            // cout<<"HI\n";
        }

        cout<<ans<<'\n';
    }

    return 0;
}