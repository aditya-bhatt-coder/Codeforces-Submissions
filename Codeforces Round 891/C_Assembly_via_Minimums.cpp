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
    int n; cin >> n;
    vi a, b((n*(n-1))/2);
    map<int, int> m;
    
    for(int i=0 ; i<(n*(n-1))/2 ; i++){
        cin >> b[i];
        m[b[i]]++;
    }

    sort(rall(b));

    int ctr = 0;

    for(auto it : b){
        int val = it;
        int f = m[it];
        while(f > 0){
            a.pb(val);
            f -= ctr;
            ctr++;
        }
        m[it] = 0;
    }

    print(a);
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