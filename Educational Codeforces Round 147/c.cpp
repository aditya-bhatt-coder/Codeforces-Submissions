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

bool ok(string &s, char mxc){
    for(auto c : s){
        if(c != mxc){
            return false;
        }
    }
    return true;
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
        int ans = INT_MAX;

        for(char c = 'a' ; c <= 'z' ; c++){
            int mx = 0, ctr = 0;
            for(char i : s){
                if(i == c){
                    ctr = 0;
                }
                else{
                    ctr ++;
                }
                mx = max(mx, ctr);
            }
            
            int val = 0;
            while(mx){
                val++;
                mx /= 2;
            }

            ans = min(val, ans);
        }

        cout << ans << "\n";
    }

    return 0;
}