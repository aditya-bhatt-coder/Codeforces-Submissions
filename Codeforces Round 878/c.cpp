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
    int n, w, temp, ctr = 0;
    cin >> n >> w >> temp;

    ll ans = 0;
    vi v(n); input(v);

    for(int i=0 ; i<n ; i++){
        if(v[i] <= temp)
            ctr++;
        else{
            for(int j=w ; j<=ctr ; j++)
                ans += ctr - j + 1;
            ctr = 0;
        }
    }

    for(int j=w ; j<=ctr ; j++)
        ans += ctr - j + 1;

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