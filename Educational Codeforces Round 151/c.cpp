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
    string s; cin >> s;
    int m; cin >> m;
    string l, r; cin >> l >> r;

    vvi v(10);

    for(int i=s.size() - 1 ; i>=0 ; i--){
        v[s[i] - '0'].pb(i);
    }

    for(int i=0 ; i<m ; i++){
        int p = INT_MIN;
        for(int j = l[i] - '0' ; j <= r[i] - '0' ; j++){
            if(!v[j].size()){
                yes; return;
            }
            p = max(p, v[j].back());
        }
        for(int j=0 ; j<10 ; j++){
            while(v[j].size() and v[j].back() <= p)
                v[j].pop_back();
        }
    }
    no;
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