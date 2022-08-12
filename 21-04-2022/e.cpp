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
        ll n;
        cin>>n;
        vector<string> v(n);
        map<char,ll> start,fin;
        map<string,ll> s;
        for(int i=0;i<n;i++) cin>>v[i];
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=(start[v[i][0]]+fin[v[i][1]] - 2*s[v[i]]);
            start[v[i][0]]++;
            fin[v[i][1]]++;
            s[v[i]]++;
        }
        cout<<ans<<'\n';
    }

    return 0;
}