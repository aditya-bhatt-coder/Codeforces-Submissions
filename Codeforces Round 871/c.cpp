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

void solve(){
    ll n; cin >> n;
    vl a, b, c;
    for(int i=0 ; i<n ; i++){
        ll t; cin >> t;
        string s; cin >> s;
        if(s[0] == '1' and s[1] == '1'){
            c.push_back(t);
        }
        else if(s[0] == '1'){
            a.push_back(t);
        }else if(s[1] == '1'){
            b.push_back(t);
        }
    }

    sort(all(a));
    sort(all(b));
    sort(all(c));

    ll ans = 1e15;

    if(c.size()){
        ans = min(ans, c[0]);
    }

    if(a.size() and b.size()){
        ans = min(ans, a[0] + b[0]);
    }

    if(ans == 1e15){
        cout << "-1\n";
    }else{
        cout << ans << "\n";
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