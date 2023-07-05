// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

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
    ll l, r; cin >> l >> r;
    ll max_size = 0, total_max = 0;

    for(ll i = l ; i <= r ; i+=i)
        max_size++;

    for(ll i = l ; i <= r ; i++){
        ll size = 0;
        for(ll j = i ; j <= r ; j+=j)
            size++;
        if(size == max_size)
            total_max++;
        else
            break;
        size = 0;
        for(ll j = i ; j <= r ; j == i ? j*=3 : j+=j)
            size++;
        if(size == max_size)
            total_max += max_size - 1;
    }

    cout << max_size << " " << total_max << "\n";
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