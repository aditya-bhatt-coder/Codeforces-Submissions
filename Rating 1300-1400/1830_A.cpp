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

int ans = 1;

void dfs(vector<vector<vector<int>>> &alist, vector<bool> &v, vector<int> &node, int cost){
    // if(alist[node[0]].size() == 0){
    //     ans = max(ans, cost);
    //     return;
    // }

    for(auto nbr : alist[node[0]]){
        if(v[nbr[0]]){
            continue;
        }
        else if(nbr[1] < node[1]){
            v[nbr[0]] = true;
            dfs(alist, v, nbr, cost + 1);
            v[nbr[0]] = false;
        }
        else{
            v[nbr[0]] = true;
            dfs(alist, v, nbr, cost);
            v[nbr[0]] = false;
        }
    }

    ans = max(ans, cost);
    // cout << node[0] << " " << cost << "\n";
}

void solve(){
    int n; cin >> n;
    ans = 1;
    vector<vector<vector<int>>> alist(n);
    vector<bool> v(n, false);

    for(int i=0 ; i<n - 1 ; i++){
        int e1, e2;
        cin >> e1 >> e2; 
        e1--; e2--;
        alist[e1].push_back({e2, i});
        alist[e2].push_back({e1, i});
    }

    v[0] = true;

    for(auto nbr : alist[0]){
        v[nbr[0]] = true;
        dfs(alist, v, nbr, 1);
        v[nbr[0]] = true;
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