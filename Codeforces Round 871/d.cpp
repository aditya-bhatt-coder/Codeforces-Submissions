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
    ll n, m;
    cin >> n >> m;

    if(n == m){
        yes;
        return;
    }

    queue<ll> q;

    q.push(n);

    while(q.size()){
        ll top = q.front(); q.pop();

        if(top % 3 == 0){
            ll a = top / 3;
            ll b = (top * 2) / 3;
            if(a == m or b == m){
                yes; return;
            }

            if(a > m and a % 3 == 0){
                q.push(a);
            }
            if(b > m and b % 3 == 0){
                q.push(b);
            }
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