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
    string s, t;
    cin >> s >> t;

    if(s == t){
        cout << "0\n";
        return;
    }

    string srev = s;
    reverse(all(srev));

    if(srev == t){
        cout << "2\n";
        return;
    }

    int ch1 = 0, ch2 = 0;

    for(int i = 0 ; i < n ; i++){
        if(s[i] != t[i]){
            ch1++;
        }
        if(srev[i] != t[i]){
            ch2++;
        }
    }

    int ch = min(ch1, ch2);

    if(ch % 2 == 1){
        if(ch1 <= ch2){
            cout << ch1 * 2 - 1 << "\n";
        }
        else{
            cout << ch2 * 2 << "\n";
        }
    }
    else{
        if(ch1 < ch2){
            cout << ch1 * 2 << "\n";
        }
        else{
            cout << ch2 * 2 - 1 << "\n";
        }
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