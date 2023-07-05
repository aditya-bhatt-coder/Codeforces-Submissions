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
    string s; cin >> s;
    s[0] = 'E';

    map<char, ll> m;
    m['A'] = 1;
    m['B'] = 10;
    m['C'] = 100;
    m['D'] = 1000;
    m['E'] = 10000;

    int n = s.size();
    ll mx = 0, ans = 0;
    for(int i = n - 1 ; i >= 0 ; i--){
        if(m[s[i]] < mx){
            ans -= m[s[i]];
        }
        else{
            ans += m[s[i]];
            mx = max(mx, m[s[i]]);
        }
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