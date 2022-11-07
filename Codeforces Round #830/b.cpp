// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

//--debug--
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
        int n; cin>>n;
        string s; cin>>s;

        bool inv = false;
        int i = 0, ans = 0;
        
        while(i < n and s[i] == '0') {i++;}
        while(i < n and s[i] == '1') {i++;}

        for( ; i<n ; i++){
            if(inv){
                if(s[i] == '1'){
                    ans++;
                    inv = false;
                }
            }else{
                if(s[i] == '0'){
                    ans++;
                    inv = true;
                }
            }
        }

        cout << ans <<"\n";
    }

    return 0;
}