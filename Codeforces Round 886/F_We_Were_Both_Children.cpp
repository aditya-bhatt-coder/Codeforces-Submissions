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
    ll n; cin >> n;
    vl f(n + 1);
    map<ll, ll> m;

    for(int i=0 ; i<n ; i++){
        ll t;
        cin >> t;
        if(t <= n)
            m[t]++;
    }
    
    for(auto it : m){
        for(int i=it.first ; i<=n ; i+=it.first){
            f[i] += it.second;
        }
    }

    ll ans = 0;

    for(int i=1 ; i<=n ; i++)
        ans = max(f[i], ans);

    cout<< ans << "\n";
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