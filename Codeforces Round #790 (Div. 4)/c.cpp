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
        vector<string> s(n);
        for(int i=0 ; i<n ; i++)
            cin>>s[i];
        int ans=INT_MAX;
        for(int i=0 ; i<n-1 ; i++){
            for(int j=i+1 ; j<n ; j++){
                int temp=0;
                for(int k=0 ; k<m ; k++){
                    temp+=abs(s[i][k]-s[j][k]);
                }
                ans = min(ans, temp);
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}