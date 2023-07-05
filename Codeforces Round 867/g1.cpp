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
        ll n; cin >> n;
        ll ans = 0, mx = INT_MIN;
        vector<ll> v(n), nums;
        unordered_map<ll, ll> m;

        for(ll &i : v){
            cin >> i;
            mx = max(i, mx);
            m[i]++;
        }

        for(auto x : m){
            if(x.second > 2){
                ans += (x.second)*(x.second-1)*(x.second-2);
            }
            ll d=2;
            while(x.first * d * d <= mx){
                if(m.find(x.first * d) != m.end() && m.find(x.first * d * d) != m.end()){ 
                    ans += (x.second) * (m[x.first * d]) * (m[x.first * d * d]); 
                }
                d++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}