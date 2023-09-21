// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define inp(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
#define pb push_back
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    int n; cin >> n;

    map<ll, ll> m1, m2, m3, m4;

    for(int i=0 ; i<n ; i++){
        ll x, y;
        cin >> x >> y;
        m1[x]++;
        m2[y]++;
        m3[x + y]++;
        m4[x - y]++;
    }

    ll ans = 0;

    for(auto it : m1)
        ans += it.second * (it.second - 1);

    for(auto it : m2)
        ans += it.second * (it.second - 1);

    for(auto it : m3)
        ans += it.second * (it.second - 1);

    for(auto it : m4)
        ans += it.second * (it.second - 1);

    cout << ans << "\n";
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