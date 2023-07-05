// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    ll n, m; cin >> n >> m;
    vl a(n * m); input(a); sort(all(a));
    ll ans1 = 0, ans2 = 0, l = a[0], h = a[n*m - 1];

    if(m < n){
        ans1 = (m - 1) * abs(l - a[n*m - 2]);
        ans1 += (n - 1) * m * abs(h - l);
        ans2 = (m - 1) * abs(h - a[1]);
        ans2 += (n - 1) * m * abs(h - l);
    }
    else{
        ans1 = (n - 1) * abs(l - a[n*m - 2]);
        ans1 += (m - 1) * n * abs(h - l);
        ans2 = (n - 1) * abs(h - a[1]);
        ans2 += (m - 1) * n * abs(h - l);
    }

    cout << max(ans1, ans2) << "\n";
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