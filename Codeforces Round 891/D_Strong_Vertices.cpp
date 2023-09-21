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
    ll hi = -1e18 + 10;

    vl a(n), b(n), f;
    inp(a); inp(b);
    
    vvl ans;

    for(int i=0 ; i<n ; i++){
        ans.pb({a[i] - b[i], i + 1});
        hi = max(hi, a[i] - b[i]);
    }
    for(int i=0 ; i<n ; i++){
        if(ans[i][0] == hi){
            f.pb(ans[i][1]);
        }
    }

    cout << f.size() << "\n";

    for(int i=0 ; i<f.size() ; i++)
        cout<< f[i] << " ";

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