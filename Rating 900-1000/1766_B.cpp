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
        string s; cin>>s;
        bool ok = false;

        map<string, int> m;

        for(int i=0 ; i<n-1 ; i++){
            string cur = to_string(s[i]); cur += s[i+1];
            if(m.count(cur)){
                if(m[cur] < i){
                    ok = true;
                    break;
                }
            }else{
                m[cur] = i+1;
            }
        }

        if(ok){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}