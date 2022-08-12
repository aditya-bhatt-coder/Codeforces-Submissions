#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, mod = 32768; cin>>n;
    vector<int> a(n);
    
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        
        if(a[i]==0){
            cout<<"0 ";
            continue;
        }
        int dp[16], ans=INT_MAX;

        for(int j=0 ; j<=15 ; j++){
            int x = a[i]+j;
            int op=0;
            while(x%2==0)
                op++, x/=2;
            dp[i]=j+15-op;
            ans = min(ans,dp[i]);
        }
        cout<<ans<<" ";

    }

    return 0;
}