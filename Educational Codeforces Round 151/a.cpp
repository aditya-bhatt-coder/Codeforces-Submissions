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
    int n, k, x;
    cin >> n >> k >> x;

    vi v(5);

    if(k == 1 and x == 1){
        no;
        return;
    }

    if(x != 1){
        yes;
        cout << n << "\n";
        for(int i=0 ; i<n ; i++){
            cout << "1 ";
        }
        cout << "\n";
    }
    else{
        if(n % 2 == 0){
            // 2 avail
            yes;
            cout << (n >> 1) << "\n";
            for(int i=0 ; i<n>>1 ; i++){
                cout << "2 ";
            }
            cout << "\n";
        }
        else if(3 <= k){
            if(n < 3){
                no; return;
            }
            else{
                yes;
                cout << (n >> 1) << "\n";
                for(int i=0 ; i<(n>>1) - 1 ; i++){
                    cout << "2 ";
                }
                cout << "3\n";
            }
        }
        else{
            no;
            return;
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