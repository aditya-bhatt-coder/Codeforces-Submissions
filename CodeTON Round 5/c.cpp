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

void solve(){
    int n; cin >> n;
    vi a(n);// input(a);
    map<int, vi> m;

    for(auto &i : a){
        cin >> i;
        i--;
    }

    for(int i=0 ; i<n ; i++){
        m[a[i]].pb(i);
    }

    vl v(1e5+2);
    ll ans = 0;
    vl dp(n + 1, 0);

    vector<priority_queue<pair<ll, ll>>> pq(n);

    for(int j=0 ; j<n ; j++){
        dp[j + 1] = dp[j];
        if(pq[a[j]].size()){
            int index = pq[a[j]].top().second;
            dp[j+1] = max(dp[j+1], dp[index] + j - index + 1);
        }
        pq[a[j]].push({dp[j] - j, j});
    }

    cout << dp[n] << "\n";

    // for(int i=1 ; i<1e5+2 ; i++){
    //     for(int j=0 ; j<n ; j+=i){
    //         int nxt = j + i;
    //         if(nxt < n and a[j] == a[nxt]){
    //             m[i].pb({j, j+i});
    //         }
    //     }
    // }

    // for(auto it : m){
    //     for(auto p : it.second){
    //         if(v[p[0]] == 0 and v[p[0]] == 0){
    //             ans += 2;
    //             for(int i=p[0] ; i<p[1] ; i++){
    //                 v[i]++;
    //             }
    //         }
    //     }
    // }

    // cout << ans << "\n";
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