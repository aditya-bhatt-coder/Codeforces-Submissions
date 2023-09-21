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
    
        ll n, c;
        cin >> n >> c;
        vl a(n); inp(a);

        ll tot = accumulate(all(a), 0ll);
        ll s2 = 0;

        for(auto i : a)
            s2 += pow(i, 2ll);
        
        ll v1 = c - s2;
        ll v2 = v1/4;
        ll v3 = v2/n;
        tot /= 2*n;

        ll ans = sqrtl(v3 + (tot * tot));

        cout << (ll)ans - tot << "\n";
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