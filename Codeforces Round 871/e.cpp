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

ll n, m, ctr = 0;
vvl g;

bool isValid(ll i, ll j){
    return i >= 0 and j >= 0 and i < n and j < m and g[i][j] > 0;
}

void dfs(ll i, ll j){
    // if(i < 0 or j < 0 or i >= n or j >= m or g[i][j] == 0){
    //     return;
    // }

    // cout << i << " " << j << "\n";

    ctr += g[i][j];
    g[i][j] = 0;

    if(isValid(i - 1, j)){
        dfs(i - 1, j);
    }
    if(isValid(i + 1, j)){
        dfs(i + 1, j);
    }
    if(isValid(i, j - 1)){
        dfs(i, j - 1);
    }
    if(isValid(i, j + 1)){
        dfs(i, j + 1);
    }
}

void solve(){
    cin >> n >> m;
    ctr = 0;
    g.clear();
    g.resize(n, vl (m));
    ll ans = 0;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin >> g[i][j];
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(g[i][j] != 0){
                ctr = 0;
                dfs(i, j);
                ans = max(ans, ctr);
            }
        }
    }

    cout << ans << "\n";
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}