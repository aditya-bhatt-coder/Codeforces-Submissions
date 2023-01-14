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

        ll ans = 0;
        string s; cin >> s;

        for(int i=0 ; i<n ; i++){
            map<int,int> m;
            int mf = 0;
            for(int j=i ; j<n ; j++){
                m[s[j]-'0']++;
                mf = max(mf,m[s[j]-'0']);
                if(mf > 10)
                    break;
                if(mf <= m.size())
                    ans++;
            }
        }

        cout<<ans<<'\n';
    }

    return 0;
}