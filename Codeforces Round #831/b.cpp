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
        int n; cin>>n;
        // vector<vector<int>> v;
        ll ans = 0;
        int ml = 0;
        for(int i=0 ; i<n ; i++){
            int a, b;
            cin>>a>>b;
            vector<int> t;
            t.push_back(a);
            t.push_back(b);
            sort(t.begin(),t.end(),greater<int>());
            // v.push_back(t);
            ml = max(ml,t[0]);
            ans += t[1];
        }

        ans *= 2;

        // sort(v.begin(),v.end(),[] (auto a, auto b){
        //     if(a[0]==b[0])
        //         return a[1]>b[1];
        //     return a[0]>b[0];
        // });

        ans += ml * 2;

        cout<<ans<<'\n';
    }

    return 0;
}