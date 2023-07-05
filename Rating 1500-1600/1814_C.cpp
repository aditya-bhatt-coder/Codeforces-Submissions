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
#define pb push_back
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    ll n, s1, s2;
    cin >> n >> s1 >> s2;
    vvl v(n, vl(2));
    vl a, b;

    for(int i=0 ; i<n ; i++){
        cin >> v[i][0];
        v[i][1] = i + 1;
    }

    sort(all(v), [](auto x, auto y){
        return x[0] > y[0];
    });

    ll t1 = s1, t2 = s2;

    for(int i=0 ; i<n ; i++){
        if(t1 < t2){
            a.pb(v[i][1]);
            t1 += s1;
        } else{
            b.pb(v[i][1]);
            t2 += s2;
        }
        // cout << t1 << " " << t2 << "\n";
    }

    cout << a.size() << " ";
    print(a);
    cout << b.size() << " ";
    print(b);
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