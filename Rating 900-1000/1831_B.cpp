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
    vi a(n), b(n);
    inp(a); inp(b);

    map<int, int> m1, m2;
    
    int ctr1 = 1;
    for(int i=1 ; i<n ; i++){
        if(a[i] == a[i - 1]){
            ctr1++;
        }
        else{
            m1[a[i - 1]] = max(m1[a[i - 1]], ctr1);
            ctr1 = 1;
        }
    }
    m1[a[n - 1]] = max(m1[a[n - 1]], ctr1);

    int ctr2 = 1;
    for(int i=1 ; i<n ; i++){
        if(b[i] == b[i - 1]){
            ctr2++;
        }
        else{
            m2[b[i - 1]] = max(m2[b[i - 1]], ctr2);
            ctr2 = 1;
        }
    }
    m2[b[n - 1]] = max(m2[b[n - 1]], ctr2);

    int ans = 0;

    for(auto it : m1)
        ans = max(ans, m1[it.first] + m2[it.first]);

    for(auto it : m2)
        ans = max(ans, m1[it.first] + m2[it.first]);

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