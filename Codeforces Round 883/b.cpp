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
    string s[3];
    cin >> s[0] >> s[1] >> s[2];

    if(s[0][0] == s[1][0] and s[1][0] == s[2][0] and s[0][0] != '.'){
        cout << s[0][0] << "\n";
        return;
    }
    if(s[0][1] == s[1][1] and s[1][1] == s[2][1] and s[0][1] != '.'){
        cout << s[0][1] << "\n";
        return;
    }
    if(s[0][2] == s[1][2] and s[1][2] == s[2][2] and s[0][2] != '.'){
        cout << s[0][2] << "\n";
        return;
    }

    if(s[0][0] == s[0][1] and s[0][1] == s[0][2] and s[0][0] != '.'){
        cout << s[0][0] << "\n";
        return;
    }
    if(s[1][0] == s[1][1] and s[1][1] == s[1][2] and s[1][0] != '.'){
        cout << s[1][0] << "\n";
        return;
    }
    if(s[2][0] == s[2][1] and s[2][1] == s[2][2] and s[2][0] != '.'){
        cout << s[2][0] << "\n";
        return;
    }

    if(s[0][0] == s[1][1] and s[1][1] == s[2][2] and s[0][0] != '.'){
        cout << s[0][0] << "\n";
        return;
    }
    if(s[0][2] == s[1][1] and s[1][1] == s[2][0] and s[2][0] != '.'){
        cout << s[2][0] << "\n";
        return;
    }

    cout << "DRAW\n";
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