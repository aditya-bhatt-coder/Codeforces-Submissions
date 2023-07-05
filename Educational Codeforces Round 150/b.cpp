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
    int n; cin >> n;
    vi a(n); input(a);

    string ans = "1";
    int mn = a[0], mx = a[0];
    bool f = false;
    int r1 = 0, r2 = 0;

    for(int i=1 ; i<n ; i++){
        if(f == false){
            if(a[i] >= mx){
                ans += "1";
                mx = max(mx, a[i]);
            }
            else if(a[i] <= mn){
                f = true;
                ans += "1";
                r1 = min(a[i], mn);
                r2 = max(a[i], mn);
            }
            else{
                ans += "0";
            }
        }
        else{
            if(r1 <= a[i] and a[i] <= r2){
                ans += "1";
                r1 = max(r1, a[i]);
            }
            else{
                ans += "0";
            }
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