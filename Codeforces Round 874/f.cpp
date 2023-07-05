// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define input(v) for(auto &i : v) cin >> i
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

ll mod = 1e9 + 7;

ll bin_exp(ll a, ll b){
    if(b == 0)
        return 1;
    if(b % 2)
        return bin_exp(a, b - 1) * a % mod;
    
    ll res = bin_exp(a, b / 2);
    return res * res % mod;
}

ll inv(ll a){
    return bin_exp(a, mod - 2);
}

void solve(){
    ll n, m; cin >> n >> m;
    vl a(n);
    map<ll, ll> mp;

    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    sort(all(a));
    a.erase(unique(all(a)), a.end());
    n = a.size();

    vl pre(a.size() + 1, 1);
    for(int i=0 ; i<a.size() ; i++)
        pre[i + 1] = (pre[i] * mp[a[i]]) % mod;

    ll l = 0, r = m - 1, ans = 0;

    while(r < n){
        ll uniq = a[r] - a[l] + 1;
        if(uniq == m)
            ans = (ans + (pre[r + 1] * inv(pre[l])) % mod) % mod;
        l++; r++;
    }

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