// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

bool ok(string &s){
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == s[i + 1]){
            return false;
        }
    }
    return true;
}

void solve(){
    int n, m; cin >> n >> m;
    string a, b, aa = "", bb = ""; cin >> a >> b;

    if(ok(a) == false and ok(b) == false){
        no; return;
    }

    if(!ok(a)){
        for(int i = 0 ; i < n - 1 ; i++){
            aa += a[i];
            if(a[i] == a[i + 1]){
                for(int j = n - 1 ; j > i ; j--){
                    b += a[j];
                }
                break;
            }
        }
    }else{
        string t = a;
        a = b;
        b = t;
        for(int i = 0 ; i < m - 1 ; i++){
            aa += a[i];
            if(a[i] == a[i + 1]){
                for(int j = m - 1 ; j > i ; j--){
                    b += a[j];
                }
                break;
            }
        }
    }

    // cout << aa << "\n" << b << "\n";

    if(ok(aa) and ok(b)){
        yes;
    }else{
        no;
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