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
        int n;
        cin>>n;

        vector<ll> v(n);
        map<ll,ll> m;

        for(ll &x : v){
            cin>>x;
            m[x]++;
        }

        bool f = true;

        for(auto it : m)
            if(it.second>1)
                f = false;

        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }

    return 0;
}