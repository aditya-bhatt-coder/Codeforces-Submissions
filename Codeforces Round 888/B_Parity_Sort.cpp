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
    vl a(n); inp(a);
    vl e, o, t;

    for(auto i : a){
        if(i % 2 == 0)
            e.pb(i);
        else
            o.pb(i);
    }

    sort(all(e)); sort(all(o));

    int op=0, ep=0;

    for(auto i : a){
        if(i % 2 == 0)
            t.pb(e[ep++]);
        else
            t.pb(o[op++]);
    }

    bool ok = is_sorted(all(t));

    if(ok){
        yes;
    }
    else{
        no;
    }
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