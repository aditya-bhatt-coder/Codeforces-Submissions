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

    int tc,pat=1;
    cin>>tc;
    while(tc--){
        int n,m; cin>>n>>m;
        vector<vector<int>> a(n, vector<int> (m,0));
        for(int i=0 ; i<n ; i+=2){
            if((i/2)%2==0)
                pat = 1;
            else
                pat=-1;
            
            for(int j=0 ; j<m ; j+=2){
                    if(pat==1){
                        pat = -1;
                        a[i][j] = 1;
                        a[i+1][j+1] = 1;
                    }
                    else{
                        pat = 1;
                        a[i][j+1] = 1;
                        a[i+1][j] = 1;
                    }
            }
        }

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<'\n';
        }
    }

    return 0;
}