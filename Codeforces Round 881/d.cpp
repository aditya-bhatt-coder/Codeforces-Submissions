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

vector<ll> leaf_counts;
vector<vector<ll>> tree;
 
int dfs(ll node, ll parent) {
    int count = 0;
    for (int child : tree[node]) {
        if (child != parent) {
            count += dfs(child, node);
        }
    }
    if (count == 0) {
        count = 1;  // Leaf node
    }
    leaf_counts[node] = count;
    return count;
}

void create_tree_and_count_paths(ll n, vector<pair<ll, ll>>& edges) {
    leaf_counts.assign(n + 1, 0);
    tree.assign(n + 1, vector<ll>());
 
    // Create the tree by adding edges
    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
 
    dfs(1, 0);  // Start the DFS from node 1 (or any root node)
 
    // Output the leaf counts for each node
    // for (int i = 1; i <= n; i++) {
    //     cout << "Node " << i << ": " << leaf_counts[i] << " leaf paths" << endl;
    // }
}

void solve(){
    ll n;
    cin >> n;
 
    vector<pair<ll, ll>> edges(n - 1);
    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        edges[i] = make_pair(u, v);
    }
 
    create_tree_and_count_paths(n, edges);

    ll qry; cin >> qry;
    // vvi q(qry, vi(2, 0));

    for(int i=0 ; i<qry ; i++){
        ll a, b;
        cin >> a >> b;

        cout << leaf_counts[a] * leaf_counts[b] << "\n";
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