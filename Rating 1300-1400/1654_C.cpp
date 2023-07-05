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
    int n; cin >> n;
    vl a(n);
    priority_queue<ll> pq;
    multiset<ll> s;

    ll sum = 0;

    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        sum += a[i];
        s.insert(a[i]);
    }

    pq.push(sum);

    while(s.size() and pq.size() and *s.rbegin() <= pq.top()){
        while(s.size() and pq.size() and s.find(pq.top()) != s.end()){
            s.erase(s.find(pq.top()));
            pq.pop();
        }
        if(pq.size()){
            ll val = pq.top(); pq.pop();
            pq.push(val / 2);
            pq.push((val + 1) / 2);
        }
    }

    if(s.empty()){
        yes;
    } else {
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