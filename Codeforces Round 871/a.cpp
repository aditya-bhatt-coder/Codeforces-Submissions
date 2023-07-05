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
    string s; cin >> s;
    int ans = 0;
    if(s[0] != 'c') ans ++;
    if(s[1] != 'o') ans ++;
    if(s[2] != 'd') ans ++;
    if(s[3] != 'e') ans ++;
    if(s[4] != 'f') ans ++;
    if(s[5] != 'o') ans ++;
    if(s[6] != 'r') ans ++;
    if(s[7] != 'c') ans ++;
    if(s[8] != 'e') ans ++;
    if(s[9] != 's') ans ++;

    cout << ans << "\n";
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