// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    ll n, m; cin >> n >> m;
    vvl v(n + 1, vl ());

    for(int i=0 ; i<m ; i++){
        ll a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    map<ll, ll> mp;
    ll mf = 0;

    for(int i=1 ; i<=n ; i++){
        ll sz = v[i].size();
        if(sz > 1){
            mp[sz]++;
            mf = max(mf, mp[sz]);
        }
    }

    if(mp.size() == 1){
        for(auto it : mp){
            cout << it.first << " " << it.first - 1 << "\n";
        }
        return;
    }

    int x, y;
    for(auto it : mp){
        if(it.second == mf){
            y = it.first - 1;
        }else{
            x = it.first;
        }
    }

    cout << x << " " << y << "\n";

    // print(tmp);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}