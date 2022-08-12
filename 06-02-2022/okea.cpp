#include<bits/stdc++.h>
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
        int mf=0, ctr=-1;
        vector<vector<int>> vv(n,vector<int> (k));
        
        for(int i=0 ; i<n ; i+=2){
            for(int j=0 ; j<k ; j++){
                ctr+=2;
                vv[i][j]=ctr;
                mf = max(ctr, mf);
            }
        }

        ctr = 0;
        for(int i=1 ; i<n ; i+=2){
            for(int j=0 ; j<k ; j++){
                ctr+=2;
                vv[i][j]=ctr;
                mf = max(ctr, mf);
            }
        }

        if(mf>n*k)
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=0 ; i<n ; i++){
                for(int j=0 ; j<k ; j++){
                    cout<<vv[i][j]<<" ";
                }cout<<'\n';
            }
        }
    }

    return 0;
}