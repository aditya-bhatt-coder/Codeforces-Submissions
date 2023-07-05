// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

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

void solve(){
    int n, m; cin >> n >> m;
    vi a(n + 1, n + 1);

    for(int i = 0 ; i < m ; i++){
        int x, y; cin >> x >> y;
        if(x > y)
            swap(x, y);
        a[x] = min(a[x], y);
    }

    for(int i = n - 1 ; i > 0 ; i--){
        a[i] = min(a[i], a[i + 1]);
    }

    ll ans = 0;
    for(int i = 1 ; i <= n ; i++){
        ans += a[i] - i;
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