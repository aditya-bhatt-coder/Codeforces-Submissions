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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m));
        for(int i=0 ; i<n ; i++)
            for(int j=0 ; j<m ; j++)
                cin>>a[i][j];
        ll ans=0;
        for(int i=0 ; i<n ; i++)
            for(int j=0 ; j<m ; j++){

                ll tans = a[i][j];
                int ti = i, tj = j;

                ti = i-1;
                tj = j-1;
                while(ti>=0 && tj>=0 && ti<n && tj<m ){
                    tans += a[ti][tj];
                    ti--;tj--;
                }

                ti = i+1;
                tj = j+1;
                while(ti>=0 && tj>=0 && ti<n && tj<m ){
                    tans += a[ti][tj];
                    ti++;tj++;
                }

                ti = i-1;
                tj = j+1;
                while(ti>=0 && tj>=0 && ti<n && tj<m ){
                    tans += a[ti][tj];
                    ti--;tj++;
                }

                ti = i+1;
                tj = j-1;
                while(ti>=0 && tj>=0 && ti<n && tj<m ){
                    tans += a[ti][tj];
                    ti++;tj--;
                }

                ans = max(ans,tans);
            }

        cout<<ans<<'\n';
    }

    return 0;
}