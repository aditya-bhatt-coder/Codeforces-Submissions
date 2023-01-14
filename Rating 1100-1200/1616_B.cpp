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
        int n; cin>>n;
        string s,t; cin>>s;

        string ans = "";
        ans += s[0];

        for(int i=1 ; i<n ; i++){
            if(s[i] < s[i-1]){
                ans += s[i];
            }
            else if(i!=1 and s[i] == s[i-1]){
                ans += s[i];
            }
            else{
                break;
            }
        }

        t = ans;
        reverse(t.begin(), t.end());

        ans += t;

        cout<<ans<<'\n';
    }

    return 0;
}