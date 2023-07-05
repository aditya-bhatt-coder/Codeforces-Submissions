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
    map<ll, int> m;
    vl a; ll temp;
    int pos = 0, neg = 0, z = 0;

    for(int i=0 ; i<n ; i++){
        cin >> temp;
        m[temp]++;
        if(temp > 0)
            pos++, a.pb(temp);
        else if(temp < 0)
            neg++, a.pb(temp);
        else
            z++;
    }

    if(neg > 2 or pos > 2){
        no; return;
    }

    if(z){
        a.pb(0);
    }

    for(int i=0 ; i<a.size() ; i++){
        for(int j=i+1 ; j<a.size() ; j++){
            for(int k=j+1 ; k<a.size() ; k++){
                if(!m.count(a[i] + a[j] + a[k])){
                    no; return;
                }
            }
        }
    }
    yes;
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