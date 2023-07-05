// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    int n, m; cin >> n >> m;
    int a1, b1, ans = 4;
    cin >> a1 >> b1;
    
    if(a1 == 1 or b1 == 1 or a1 == n or b1 == m){
        ans = 3;
        if(make_pair(a1,b1) == make_pair(1,1)
        or make_pair(a1,b1) == make_pair(1,m)
        or make_pair(a1,b1) == make_pair(n,1)
        or make_pair(a1,b1) == make_pair(n,m)){
            ans = 2;
        }
    }
    cin >> a1 >> b1;
    if(a1 == 1 or b1 == 1 or a1 == n or b1 == m){
        ans = min(ans, 3);
        if(make_pair(a1,b1) == make_pair(1,1)
        or make_pair(a1,b1) == make_pair(1,m)
        or make_pair(a1,b1) == make_pair(n,1)
        or make_pair(a1,b1) == make_pair(n,m)){
            ans = 2;
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