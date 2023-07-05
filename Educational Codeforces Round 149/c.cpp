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
    string s; cin >> s;
    int n = s.size();

    vi l(n, -1), r(n, -1);
    int val = -1;

    for(int i=0 ; i<n ; i++){
        if(s[i] == '?')
            l[i] = val;
        else
            val = s[i] - '0';
    }

    val = -1;
    for(int i=n - 1 ; i>=0 ; i--){
        if(s[i] == '?')
            r[i] = val;
        else
            val = s[i] - '0';
    }

    for(int i=0 ; i<n ; i++){
        if(s[i] == '?'){
            if(l[i] == r[i] and l[i] == 0){
                s[i] = '0';
            }
            else if(l[i] == r[i] and l[i] == 1){
                s[i] = '1';
            }
            else if(l[i] == r[i] and l[i] == -1){
                s[i] = '0';
            }
            else if(l[i] == -1){
                s[i] = r[i] == 0 ? '0' : '1';
            }
            else if(r[i] == -1){
                s[i] = l[i] == 0 ? '0' : '1';
            }
            else{
                s[i] = '0';
            }
        }
    }

    cout << s << "\n";
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