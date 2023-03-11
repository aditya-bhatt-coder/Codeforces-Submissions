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
        vector<vector<ll>> v(n, vector<ll>(2));
        vector<vector<ll>> ans;

        for(int i=0 ; i<n ; i++){
            cin>>v[i][0];
            v[i][1] = i;
        }

        sort(v.begin(), v.end());

        for(int i=1 ; i<n ; i++){
            if(v[i-1][0] > v[i][0]){
                ans.push_back({v[i][1]+1, v[i-1][0]-v[i][0]});
                v[i][0] = v[i-1][0];
            }
            else if(v[i-1][0] < v[i][0]){
                ll extra = v[i][0] % v[i-1][0];
                if(extra == 0)
                    continue;
                ll tba = v[i-1][0] - extra;
                ans.push_back({v[i][1]+1,tba});
                v[i][0] += tba;
            }
        }

        cout<<ans.size()<<'\n';
        for(auto e : ans){
            cout<<e[0]<<" "<<e[1]<<'\n';
        }
        // print(v);
    }

    return 0;
}