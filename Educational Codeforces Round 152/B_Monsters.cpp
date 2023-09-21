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
    ll n, k;
    cin >> n >> k;

    vvl a;
    vi ans;

    for(int i=1 ; i<=n ; i++){
        ll val; cin >> val;
        val %= k;
        if(!val)
            cout << i << " ";
        else
            a.pb({val, i});
    }

    sort(all(a), [](const auto x, const auto y){
        if(x[0] == y[0])
            return x[1] < y[1];
        return x[0] > y[0];
    });

    for(auto it : a)
        cout << it[1] << " ";

    cout << "\n";
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