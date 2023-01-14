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
        string s; cin>>s;

        bool ans = true;

        if(s.size() == 1){
            if(!(s[0] == 'Y' or s[0] == 'e' or s[0] == 's')){
                ans = false;
            }
                ans ? cout<<"YES\n" : cout<<"NO\n";
                continue;
        }

        for(int i=0 ; i<s.size()-1 ; i++){
            if(s[i] == 'Y'){
                if(s[i+1] != 'e'){
                    ans = false;
                }
            }
            else if(s[i] == 'e'){
                if(s[i+1] != 's'){
                    ans = false;
                }
            }
            else if(s[i] == 's'){
                if(s[i+1] != 'Y'){
                    ans = false;
                }
            }
            else{
                ans = false;
            }
        }

        ans ? cout<<"YES\n" : cout<<"NO\n";
    }

    return 0;
}