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
        int n,k,sz;
        cin>>n>>k;
        sz = n/k;

        string s; cin>>s;
        string ans = "";
        vector<int> v(26);

        for(int i=0 ; i<n ; i++){
            v[s[i]-'a']++;
        }

        for(int i=0 ; i<k ; i++){
            for(int j=0 ; j<26 ; j++){
                if(v[j] == 0 or j == sz){
                    ans += 'a' + j;
                    break;
                }
                v[j]--;
            }
        }

        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());

        cout<<ans<<'\n';
    }

    return 0;
}