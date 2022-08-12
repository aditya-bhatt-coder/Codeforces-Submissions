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

        if(m==1 || n==1)
            cout<<"YES\n";

        else{
            bool flag = false;

            for(int i=0 ; i<n-1 ; i++)
                for(int j=0 ; j<m-1 ; j++)
                    if(a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1] == 3){
                        flag = true; break;
                    }
            flag ? cout<<"NO\n" : cout<<"YES\n";
        }
    }

    return 0;
}