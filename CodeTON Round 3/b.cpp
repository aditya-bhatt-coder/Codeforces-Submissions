// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
using namespace std;

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

        ll sz = 0, so = 0, tz = 0, to = 0;

        for(int i=0 ; i<n ; i++){
            if(s[i] == '0')
                tz++;
            else
                to++;
        }

        ll temp = 0;
        for(int i=0 ; i<n ; i++){
            if(s[i] == '0'){
                temp++;
                sz = max(sz, temp);
            }
            else{
                temp = 0;
            }
        }

        temp = 0;
        for(int i=0 ; i<n ; i++){
            if(s[i] == '1'){
                temp++;
                so = max(so, temp);
            }
            else{
                temp = 0;
            }
        }

        cout<<max({sz*sz,so*so,tz*to})<<'\n';
    }

    return 0;
}