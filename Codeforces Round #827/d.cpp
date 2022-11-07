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
        vector<int> v(n+1);
        map<int,int> m;
        for(int i=1 ; i<=n ; i++){
            cin>>v[i];
            m[v[i]] = i;
        }

        int ans = -1;

        for(auto it1 : m){
            for(auto it2 : m){
                if(__gcd(it1.first,it2.first)==1){
                    ans = max(ans, it1.second+it2.second);
                }
            }
        }

        cout<<ans<<'\n';
    }

    return 0;
}