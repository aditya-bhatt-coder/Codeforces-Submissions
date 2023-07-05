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
    string s; cin >> s;
    int n; cin >> n;

    vi v(26), req(26);

    for(auto it : s){
        v[it - 'a']++;
    }

    for(int i=0 ; i<26 ; i++){
        for(int j=0 ; j<v[i] ; j++){
            n -= (i + 1);
            if(n >= 0){
                req[i]++;
            }else{
                break;
            }
        }
        if(n < 0){
            break;
        }
    }

    for(char ch : s){
        if(req[ch - 'a']){
            cout << ch;
            req[ch - 'a']--;
        }
    }

    cout << "\n";
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