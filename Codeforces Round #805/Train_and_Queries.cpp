//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> v(n);
        map<int,vector<int>> m;
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
            m[v[i]].push_back(i+1);
        }
        int a,b;
        for(int i=0 ; i<k ; i++){
            cin>>a>>b;
            if(m.find(a)!=m.end() and m.find(b)!=m.end()){
                if(m[a][0]<=m[b][m[b].size()-1]){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }else{
                cout<<"NO\n";
            }
        }
    }

    return 0;
}