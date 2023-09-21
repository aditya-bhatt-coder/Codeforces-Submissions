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
    ll n, m, h;
    cin >> n >> m >> h;

    vvl v;

    for(int i=0 ; i<n ; i++){
        vl t(m);
        for(int j=0 ; j<m ; j++){
            cin >> t[j];
        }
        sort(all(t));
        ll pts = 0, time = 0, rt = 0;
        for(int j=0 ; j<m ; j++){
            rt += t[j];
            if(rt > h){
                break;
            }
            else{
                time += rt;
                pts++;
            }
        }
        v.pb({pts, time, i});
    }

    sort(all(v), [](auto const x, auto const y){
        if(x[0] == y[0]){
            if(x[1] == y[1]){
                return x[2] < y[2];
            }
            return x[1] < y[1];
        }
        return x[0] > y[0];
    });

    int ans = 1;
    for(int i=0 ; i<n ; i++){
        if(v[i][2] == 0)
            ans += i;
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