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

vector<bool> v(1e6 + 1);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (ll k = 2; k<=1000 ; k++){
        ll val = 1 + k;
        for(ll i=2 ; i<30 ; i++){
            val += pow(k, i);
            if(val > 1e6)
                break;
            else
                v[val] = true;
        }
    }

    int tc;
    cin>>tc;

    while(tc--){
        int n; cin >> n;
        if(v[n])
            yes;
        else
            no;
    }

    return 0;
}