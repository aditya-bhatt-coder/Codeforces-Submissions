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

int n, m;
set<vi> s;
vi q;

bool f(int mid){
    vi v(n), pre(n + 1);
    
    for(int i = 0 ; i < mid ; i++){
        v[q[i]]++;
    }
    
    for(int i = 0 ; i < n ; i++){
        pre[i + 1] = pre[i] + v[i];
    }

    // cout << "midf " << mid << "\n";
    // print(q);
    // print(v);
    // print(pre);

    for(auto it : s){
        int l = it[0], r = it[1];
        int spaces = r - l + 1;
        int ones = pre[r + 1] - pre[l];
        // cout << spaces << "," << ones << " ";
        if(ones > (spaces/2.0)){
            return true;
        }
    }

    return false;
}

void solve(){
    cin >> n >> m;
    s.clear();
    
    for(int i=0 ; i<m ; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        s.insert({a, b});
    }

    ll qry; cin >> qry;
    q.resize(qry);
    
    for(int i = 0 ; i < qry ; i++){
        cin >> q[i];
        q[i]--;
    }

    if(!f(qry)){
        cout << "-1\n";
        return;
    }

    int ans = qry;
    int l = 1, r = qry;

    while(l <= r){
        int mid = (l + r) / 2;
        // cout << "midm " << mid << "\n";
        if(f(mid)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
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