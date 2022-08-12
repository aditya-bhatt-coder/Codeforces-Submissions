#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n; vector<int> v(n);
        map<int,int> m;
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
            m[v[i]]++;
        }
        bool found=false;
        for(auto it=m.begin() ; it!=m.end() ; it++){
            if(it->second>=3){
                found=true;
                cout<<it->first<<'\n'; break;
            }
        }
        if(!found)
            cout<<"-1\n";
        
    }

    return 0;
}