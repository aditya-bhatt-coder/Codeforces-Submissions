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
    vi a(n); inp(a);

    int t = 0, ans = 0;
    vi aa;
    vector<bool> c;

    for(int i=0 ; i<n ; i++){
        if(a[i] == 0){
            if(t){
                aa.pb(t);
                c.pb(true);
                ans++;
                t = 0;
            }
            aa.pb(0);
            c.pb(false);
        }
        else{
            t = max(t, a[i]);
        }
    }

    if(t){
        aa.pb(t);
        c.pb(true);
        ans++;
    }

    n = aa.size();

    // for(auto i : c)
    //     cout << i << " ";

    for(int i=0 ; i<n ; i++){
        if(aa[i] == 2){
            if(i > 0 and c[i - 1] == false){
                c[i - 1] = true;
            }
            if(i + 1 < n and c[i + 1] == false){
                c[i + 1] = true;
            }
        }
        else if(aa[i] == 1){
            if(i > 0 and c[i - 1] == false){
                c[i - 1] = true;
            }
            else if(i + 1 < n and c[i + 1] == false){
                c[i + 1] = true;
            }
        }
    }

    ans += count(all(c), false);

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}