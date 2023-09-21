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
    int n, k;
    cin >> n >> k;

    vl c(n); inp(c);
    vector<bool> have(n);

    for(int i=0 ; i<k ; i++){
        int t; cin >> t;
        have[--t] = true;
    }

    vi ind(n);
    vvi g(n);
    vl ans(n);
    queue<int> q;

    for(int i=0 ; i<n ; i++){
        int itm; cin >> itm;

        for(int j=0 ; j<itm ; j++){
            int val; cin >> val;
            val--;
            ind[i]++;
            g[val].pb(i);
        }

        if(!ind[i]){
            q.push(i);
            if(!have[i]){
                ans[i] = c[i];
            }
        }
    }

    // for(auto it : g)
    //     print(it);

    // print(ans);

    while(q.size()){
        int node = q.front(); q.pop();
        // update node value
        ans[node] = have[node] ? 0 : ans[node];
        ans[node] = min(ans[node], c[node]);
        // remove node and its edges
        for(auto nbr : g[node]){
            ans[nbr] += ans[node];
            if(--ind[nbr] == 0){
                q.push(nbr);
            }
        }
        // cout << node << " ";
    }

    print(ans);
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