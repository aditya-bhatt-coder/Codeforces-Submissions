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
    int n, k;
    cin >> n >> k;

    int ans = INT_MAX, t;
    map<int, vi> m;

    for(int i=0 ; i<n ; i++){
        cin >> t;
        if(m[t].size() == 0)
            m[t].pb(0);
        m[t].pb(i + 1);
    }

    for(auto &it : m){
        vi mx;
        it.second.pb(n + 1);
        for(int i=0 ; i<it.second.size() - 1 ; i++)
            mx.pb(it.second[i + 1] - it.second[i] - 1);
        sort(rall(mx));
        int val = max(mx[0]/2, mx[1]);
        ans = min(ans, val);
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