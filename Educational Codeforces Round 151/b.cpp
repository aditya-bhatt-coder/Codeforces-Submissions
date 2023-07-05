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
    int a1, a2, b1, b2, c1, c2;
    cin >> a1>> a2>> b1>> b2>> c1>> c2;

    int ans = 0;

    if((b1 > a1 and c1 > a1) or (b1 < a1 and c1 < a1)){
        ans += min(abs(a1-b1), abs(a1-c1));
    }

    if((b2 > a2 and c2 > a2) or (b2 < a2 and c2 < a2)){
        ans += min(abs(a2-b2), abs(a2-c2));
    }

    cout << ans + 1 << "\n";
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