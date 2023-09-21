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
    ll n, sum = 0;
    cin >> n;
    vl a(n); inp(a);

    vl b = a, pre(n);
    sort(all(b));

    for(ll i=0 ; i<n ; i++){
        sum += b[i];
        pre[i] = sum;
    }

    for(ll i=0 ; i<n ; i++){
        ll val = 0;
        ll idx = lower_bound(all(b), a[i]) - b.begin();
        if(idx == 0){
            val = sum - (a[i] * n);
        }
        else{
            val = sum - pre[idx - 1] - ((n - idx) * a[i]);
            val += (idx * a[i]) - pre[idx - 1];
        }
        val += n;

        cout << val << " ";
    }

    cout << "\n";
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