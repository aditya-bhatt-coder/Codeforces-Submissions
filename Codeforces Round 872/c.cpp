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
    vl p(n), v;
    ll one = 0, two = 0;

    for(ll &i : p){
        cin >> i;
        if(i == -1)
            one++;
        else if(i == -2)
            two++;
        else
            v.push_back(i);
    }

    sort(all(v));
    v.erase( unique( all(v) ), v.end() );

    ll lavail = 0, ravail = m - 1;
    ll ans = min(m, max(one + v.size(), two + v.size()));

    for(int i=0 ; i<v.size() ; i++){
        lavail = v[i] - 1;
        ravail = m - v[i];
        ans = max(ans, min(i + one, lavail) + min(v.size() - 1 - i + two, ravail) + 1);
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