#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        int a[n][m];

        for(int i=0 ; i<n ; i++){
            string s; cin>>s;
            for(int j=0 ; j<m ; j++)
                a[i][j] = '0'==s[j] ? 0 : 1;
        }

        if(a[0][0]==1)
            cout<<"-1\n";

        else{
            int ans = 0;
            vector<vector<int>> v;

            for(int i=n-1 ; i>=0 ; i--)
                for(int j=m-1 ; j>=0 ; j--){
                    if(a[i][j] == 1 && i!=0){
                        ans++;
                         v.push_back({i,j+1,i+1,j+1});
                    }
                    if(a[i][j] == 1 && i==0){
                        ans++;
                        v.push_back({i+1,j,i+1,j+1});
                    }
                }
                
            cout<<ans<<'\n';
            for(int i=0 ; i<v.size() ; i++){
                for(int j=0 ; j<4 ; j++)
                    cout<<v[i][j]<<" ";
                cout<<"\n";
            }
        }
    }

    return 0;
}