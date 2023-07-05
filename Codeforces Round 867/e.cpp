// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    if(n % 2 != 0){
        cout << "-1\n";
        return;
    }

    vector<ll> c(26), f(26);
    for(int i=0 ; i<n ; i++){
        c[s[i] - 'a']++;
        if(c[s[i] - 'a'] > n/2){
            cout << "-1\n";
            return;
        }
        if(i < n/2){
            if(s[i] == s[n - i - 1]){
                f[s[i] - 'a']++;
            }
        }
    }

    sort(f.begin(), f.end(), [](const auto a, const auto b){
        return a > b;
    });

    ll ans = 0;

    // print(f);

    for(int i=0 ; i<26 ; i++){
        for(int j=i+1 ; j<26 ; j++){
            if(f[i] == 0 or f[j] == 0){
                continue;
            }
            else if(f[i] >= f[j]){
                ans += f[j];
                f[i] -= f[j];
                f[j] = 0;
                // print(f);
            }
            else{
                ans += f[i];
                f[j] -= f[i];
                f[i] = 0;
                // print(f);
                break;
            }
        }
    }

    // ans = accumulate(f.begin(), f.end(), ans);

    for(int i=0 ; i<26 ; i++)
        ans += f[i];

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