// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        ll n; cin>>n;

        ll sum = 0;
        vector<ll> v(n);
        for(ll &x : v) cin>>x, sum+=x;

        ll k = sum*2;

        if(k % n != 0){
            cout<<0<<'\n';
            continue;
        }

        k /= n;

        map<ll, ll> m;
        ll count = 0;
        for (int i = 0; i < n; i++) {
            if (m.find(k - v[i]) != m.end()) {
                count += m[k - v[i]];
            }
            m[v[i]]++;
        }

        cout<<count<<'\n';
    }

    return 0;
}