// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define in(v) for(auto &i : v) {cin >> i; fact(i);}
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

map<ll, ll> m;

void fact(ll n){
    // Save the number of 2s that divide n
    while (n%2 == 0){
        m[2]++;
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i*i <= n; i = i+2){
        // While i divides n, print i and divide n
        while (n%i == 0){
            m[i]++;
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        m[n]++;
}

void solve(){
    m.clear();
    int n; cin >> n;
    vl a(n); in(a)

    ll ans = 0, rem = 0;

    for(auto it : m){
        // cout << it.first << "\n";
        ans += it.second >> 1;
        if(it.second & 1){
            rem++;
        }
    }

    ans += rem / 3;
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