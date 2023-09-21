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
    int n, k;
    cin >> n >> k;

    vi a(n); inp(a);
    int s = a[0];
    int e = a[n - 1];

    int sv = 0;
    int ev = 0;

    int i = 0;
    for(i=0 ; i<n ; i++){
        if(sv == k){
            break;
        }
        if(a[i] == s){
            sv++;
        }
    }

    for( ; i<n ; i++){
        if(ev == k){
            break;
        }
        if(a[i] == e){
            ev++;
        }
    }

    if(s == e and sv == k){
        yes; return;
    }

    if(sv == k and ev == k){
        yes;
    }
    else{
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