// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

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
vector<int> parent, dsu_sz;

void make_set(int v){
    parent[v] = v;
    dsu_sz[v] = 1;
}

int find_set(int v){
    if(v==parent[v])
        return v;
    return parent[v] = find_set(parent[v]); //path compression
}

void union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a != b){
        if(dsu_sz[a] < dsu_sz[b]) //union by size
            swap(a,b);
        parent[b] = a;
        dsu_sz[a] += dsu_sz[b];
    }
}

int connectedComponents(int n){
    set<int> s;

    for(int i = 1 ; i <= n ; i++)
        s.insert(find_set(i));

    return s.size();
}

void solve(){
    int n; cin >> n;
    parent.resize(n + 1);
    dsu_sz.resize(n + 1);
    vi a(n);
    vector<set<int>> alist(n + 1, set<int>());
    int cnt = 0;

    for(int i=0 ; i<=n ; i++)
        make_set(i);

    for(int i=1 ; i<=n ; i++){
        cin >> a[i - 1];
        alist[a[i - 1]].insert(i);
        alist[i].insert(a[i - 1]);
        union_set(a[i - 1], i);
    }

    map<int, int> m;
    set<int> s;

    for(int i = 1 ; i <= n ; i++){
        int lead = find_set(i);
        s.insert(lead);
        if(alist[i].size() < 2){
            m[lead] = 1;
        }
    }

    int cc = s.size();
    int ctr = 0;
    
    for(auto it : m)
        ctr++;

    cout << min(cc - ctr + 1, cc) << " " << cc << "\n";
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