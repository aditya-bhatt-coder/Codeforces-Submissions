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

    int t;
    cin>>t;
        // 1. Make the array decreasing (0 to n-1)
        // 2. Make the array equal (n-1 to 0)
        // 3. Make array equal to 0
    while(t--){

        int n; cin>>n;
        ll dec=0,ans=0;

        vector<ll> a(n);

        for(int i=0 ; i<n ; i++){
            cin>>a[i];
            a[i] -= dec;
            if(i>0 and a[i-1]<a[i]){
                dec += a[i]-a[i-1];
                a[i] = a[i-1];
            }
        }
        ans += dec;
        // for(int i=0 ; i<n ; i++)
        //     cout<<a[i]<<" ";
        dec = 0;
        for(int i=n-2 ; i>=0 ; i--){
            a[i] -= dec;
            dec += abs(a[i]-a[i+1]);
            a[i] = a[i+1];
        }
        // cout<<dec<<'\n';
        ans += dec;

        cout<<ans+abs(0-a[0])<<'\n';

    }

    return 0;
}