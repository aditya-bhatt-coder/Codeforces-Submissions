#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        
        //vector (weight, coordinate, index)
        vector<pair<int, pair<int, int>>> v(m);
        for(int i=0 ; i<m ; i++){
            cin>>v[i].second.first>>v[i].first;
            v[i].second.second = i+1;
        }
        sort(v.begin(),v.end());

        //vector (coordinate, index)
        vector<pair<int, int>> vp;
        int w=0;
        for(int i=0 ; i<n*2 ; i++){
            w += v[i].first;
            vp.push_back({v[i].second.first,v[i].second.second});
        }
        sort(vp.begin(),vp.end());

        cout<<w<<'\n';
        for(int i=0 ; i<n ; i++){
            cout<<vp[i].second<<" "<<vp[vp.size()-1-i].second<<'\n';
        }
        cout<<'\n';
    }

    return 0;
}