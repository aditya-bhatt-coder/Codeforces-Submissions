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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    vi o(n, -1), z(n, -1);

    for(int i=0 ; i<n ; i++){
        if(s[i] != '0' and i > 0){
            z[i] = z[i - 1];
        }
        else if(s[i] == '0'){
            z[i] = i;
        }
    }

    for(int i=n-1 ; i>=0 ; i--){
        if(s[i] != '1' and i < n-1){
            o[i] = o[i + 1];
        }
        else if(s[i] == '1'){
            o[i] = i;
        }
    }

    // print(o);
    // print(z);

    set<vi> set;

    for(int i=0 ; i<m ; i++){
        int x, y;
        cin >> x >> y;
        x = o[--x];
        y = z[--y];

        if(x == -1 or y == -1 or x > y)
            set.insert({-1, -1});
        else
            set.insert({x, y});
    }

    cout << set.size() << "\n";
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