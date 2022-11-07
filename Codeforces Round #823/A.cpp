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
        int n,c; cin>>n>>c; ll ans=0;
        vector<int> a(n);
        map<int,int> m;
        for(int &i : a){
            cin>>i;
            m[i]++;
        }

        for(auto it : m){
            int no = it.second;
            ans+=min(no,c);
        }

        cout<<ans<<'\n';
    }

    return 0;
}