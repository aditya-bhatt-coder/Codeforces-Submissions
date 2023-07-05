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
    string s[2];
    cin >> s[0] >> s[1];
    ll t, q, n = s[0].size();
    cin >> t >> q;

    ll blk = 0, eq = 0, time = 0;
    map<ll, ll> m;

    for(int i=0 ; i<n ; i++){
        if(s[0][i] == s[1][i]){
            eq++;
        }
    }

    for(int i=0 ; i<q ; i++){
        time++;
        if(m[time]){
            int idx = m[time];
            blk--;
            if(s[0][idx] == s[1][idx]){
                eq++;
            }
        }

        int type; cin >> type;

        if(type == 1){
            int idx; cin >> idx;
            idx--;
            blk++;
            if(s[0][idx] == s[1][idx]){
                eq--;
            }
            m[time + t] = idx;
        }
        else if(type == 2){
            int str1, pos1, str2, pos2;
            cin >> str1 >> pos1 >> str2 >> pos2;
            str1--; pos1--; str2--; pos2--;
            if(s[0][pos1] == s[1][pos1]){
                eq--;
            }
            if(s[0][pos2] == s[1][pos2]){
                eq--;
            }
            swap(s[str1][pos1], s[str2][pos2]);
            if(s[0][pos1] == s[1][pos1]){
                eq++;
            }
            if(s[0][pos2] == s[1][pos2]){
                eq++;
            }
        }
        else{
            if(eq + blk >= n){
                yes;
            }else{
                no;
            }
        }
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