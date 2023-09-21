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
    ll n; cin >> n;
    vl a(n-1), t(n-1); inp(a);

    auto acc = [](set<ll> &s, ll n){
        for(int i=1 ; i<=n ; i++)
            s.insert(i);
    };

    set<ll> s;    // [1, n]
    acc(s, n);

    ll rem = -1e18, tot = n*(n+1)/2;

    if(s.count(a[0])){
        s.erase(a[0]);
    } else {
        rem = a[0];
    }

    bool ok = true;

    for(int i=0 ; i<n - 2 ; i++){
        ll d = a[i+1] - a[i];
        if(s.count(d)){
            s.erase(d);
        }
        else{
            if(rem == -1e18)
                rem = d;
            else 
                ok = false;
        }
    }

    if(!ok){
        no;
        return;
    }

    ll sum = 0;
    for(auto i : s)
        sum += i;

    if(rem != -1e18){
        if(sum == rem)
            yes;
        else
            no;
    }
    else{
        if(sum + a[n - 2] == tot)
            yes;
        else
            no;
    }
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