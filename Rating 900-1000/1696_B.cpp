// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vii vector<vi>
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
    int n; cin >> n;
    vi a(n); input(a);

    int l = 0, r = n - 1;

    while(l < n and a[l] == 0) l++;
    while(r >= 0 and a[r] == 0) r--;

    if(l > r){
        cout << "0\n";
        return;
    }

    for(int i=l ; i<=r ; i++){
        if(a[i] == 0){
            cout << "2\n";
            return;
        }
    }

    cout << "1\n";

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