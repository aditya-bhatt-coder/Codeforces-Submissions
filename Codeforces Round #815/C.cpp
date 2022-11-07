//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
// #define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n,m,mn1=4,tot1=0;
        cin>>n>>m;
        vector<vector<int>> g(n,vector<int>(m,0));
        for(int i=0 ; i<n ; i++){
            string s; cin>>s;
            for(int j=0 ; j<m ; j++){
                if(s[j]=='1'){
                    g[i][j] = 1;
                    tot1 += 1;
                }
            }
        }
        for(int i=0 ; i<n-1 ; i++){
            for(int j=0 ; j<m-1 ; j++){
                mn1 = min(mn1,g[i][j]+g[i][j+1]+g[i+1][j]+g[i+1][j+1]);
            }
        }
        if(mn1==0 or mn1==1 or mn1==2){
            cout<<tot1<<'\n';
        }else if(mn1==3){
            cout<<tot1-1<<'\n';
        }else{
            cout<<tot1-2<<'\n';
        }
    }

    return 0;
}