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
    int n, q; cin >> n >> q;
    deque<int> dq;
    vi vec(n + 1);
    int mx = 0;

    for(int i=0 ; i<n ; i++){
        int t; cin >> t;
        vec[i + 1] = t;
        dq.pb(t);
    }

    vvi a(n + 1, vi());

    for(int i=1 ; i<=1e5 + 1 ; i++){
        int x = dq.front(); dq.pop_front();
        int y = dq.front(); dq.pop_front();

        dq.push_front(max(x, y));
        dq.push_back(min(x, y));

        a[dq.front()].pb(i);

        if(dq.front() == n)
            break;
    }

    int id, r;
    for(int i=0 ; i<q ; i++){
        cin >> id >> r;
        id = vec[id];
        if(id == n){
            // cout << r - a[n][0] + 1;
            if(r - a[n][0] + 1 < 0){
                cout << 0;
            }else{
                cout << r - a[n][0] + 1;
            }
        }
        else if(a[id].empty()){
            cout << "0";
        }
        else{
            auto ub = upper_bound(all(a[id]), r) - a[id].begin();
            cout << ub;
        }
        cout << "\n";
    }

    // for(int i=1 ; i<=n ; i++){
    //     print(a[i]);
    // }
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