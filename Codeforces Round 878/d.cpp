// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

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
    int n; cin >> n;
    vi a(n); input(a);
    sort(all(a));

    auto f = [&](int mid){
        int skip = a[0] + mid + mid;
        int ctr = 1;
        for(int i=1 ; i<n ; i++){
            if(a[i] > skip){
                ctr++;
                skip = a[i] + mid + mid;
            }
        }
        return ctr <= 3;
    };

    int l = 0, r = a[n - 1];

    while(l <= r){
        int mid = (r + l)/2;
        if(f(mid)){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
        // cout << mid << " ";
    }

    cout << l << "\n";
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