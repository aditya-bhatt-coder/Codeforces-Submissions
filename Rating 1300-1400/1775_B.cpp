// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) {cin >> i; m[i]++;}
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
    map<int, int> m;

    vvi a;

    for(int i=0 ; i<n ; i++){
        int cnt; cin >> cnt;
        vi temp(cnt);
        for(auto &i : temp){
            cin >> i;
            m[i]++;
        }
        a.pb(temp);
    }

    for(auto v : a){
        bool ok = true;
        for(auto e : v){
            if(m[e] < 2)
                ok = false;
        }
        if(ok){
            yes; return;
        }
    }
    no;
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