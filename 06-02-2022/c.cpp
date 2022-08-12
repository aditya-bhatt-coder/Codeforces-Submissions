#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){

        int n,k; cin>>n>>k;
        int a[n][k];
        if(n>1 && n%2!=0 && k>1)
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            int ctr=1;
            for(int i=0 ; i<k ; i++){
                for(int j=0 ; j<n ; j++){
                    a[j][i]=ctr;ctr++;
                }
            }
            for(int i=0 ; i<n ; i++){
                for(int j=0 ; j<k ; j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<'\n';
            }
        }

    }

    return 0;
}