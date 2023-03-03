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

        vector<vector<int>> v;

        for(int i=0 ; i<n ; i++){
            vector<int> tmp(n-1);
            for(int j=0 ; j<n-1 ; j++){
                cin >> tmp[j];
            }
            v.push_back(tmp);
        }

        map<int,int> m;

        for(int i=0 ; i<n ; i++){
            m[v[i][0]]++;
        }

        int fe = 0, mf = 0;

        for(auto it : m)
            if(it.second > mf){
                mf = it.second;
                fe = it.first;
            }

        vector<int> ans(n);
        ans[0] = fe;

        for(int i=0 ; i<n ; i++){
            if(v[i][0] != fe){
                for(int j=0 ; j<n-1 ; j++){
                    ans[j+1] = v[i][j];
                }
                break;
            }
        }

        print(ans);
    }

    return 0;
}