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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        string s; cin >> s;
        int n = s.size();
        int ans = 0;

        if(n == 1){
            if(s[0] == '^'){
                ans ++;
            }
            else{
                ans += 2;
            }
            cout << ans << "\n";
            continue;
        }

        if(n == 2){
            if(s == "^_" or s == "_^"){
                ans++;
            }
            else if(s == "__"){
                ans += 3;
            }
            cout << ans << "\n";
            continue;
        }

        if(s[0] == '_'){
            ans++;
        }

        if(s[n - 1] == '_'){
            ans++;
        }

        for(int i=0 ; i<n-1 ; i++){
            if(s[i] == s[i + 1] and s[i] == '_'){
                ans++;
            }
        }
            
        cout << ans << "\n";
    }

    return 0;
}