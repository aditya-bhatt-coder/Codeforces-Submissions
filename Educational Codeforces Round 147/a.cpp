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
        int ans = 0;

        if(s[0] == '0'){
            cout << "0\n";
            continue;
        }

        for(int i=0 ; i<s.size() ; i++){
            if(i == 0){
                if(s[i] == '?'){
                    ans = 9;
                }
                else{
                    ans = 1;
                }
            }
            else{
                if(s[i] == '?'){
                    ans *= 10;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}