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
        int n; cin>>n;
        if(n%2!=0)
            cout<<"0\n";
        else{
            long long ans=1;
            int mod = 998244353;
            for(int i=2 ; i<=n/2 ; i++){
                ans *= i;
                ans %= mod;
            }
            ans *= ans;
            ans %= mod;

            cout<<ans<<'\n';
        }
    }

    return 0;
}