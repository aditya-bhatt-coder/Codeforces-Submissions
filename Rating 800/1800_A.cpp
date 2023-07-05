// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<bool> ok(4);

    int i = 0;
    while (i < n and (s[i] == 'm' or s[i] == 'M')) i++, ok[0]=true;
    while (i < n and (s[i] == 'e' or s[i] == 'E')) i++, ok[1]=true;
    while (i < n and (s[i] == 'o' or s[i] == 'O')) i++, ok[2]=true;
    while (i < n and (s[i] == 'w' or s[i] == 'W')) i++, ok[3]=true;

    if(i == n and ok[0] and ok[1] and ok[2] and ok[3]){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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