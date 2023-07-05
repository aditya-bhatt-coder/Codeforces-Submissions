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

vl ans(2250001);
vvl dp(2023, vl (2023));

void solve(){
    ll n; cin >> n;
    cout << ans[n] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;

    ll cur = 1;

    for(ll i=1 ; i<1500 ; i++){
        for(ll j=1 ; j<=i ; j++){
            ll x = i - j + 1;
            ll y = j;
            dp[x][y] = cur * cur + dp[x - 1][y] + dp[x][y - 1] - dp[x - 1][y - 1];
            ans[cur] = dp[x][y];
            cur++;
        }
    }

    while(tc--){
        solve();
    }

    return 0;
}