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

    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
        bool ans = true;

        vector<ll> a(n),b(n);

        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }

        for(int i=0 ; i<n ; i++){
            cin>>b[i];
        }

        for(int i=0 ; i<n ; i++){
            if(a[i]>b[i]){
                ans = false; break;
            }
            if(a[i]!=b[i] and b[i]>b[(i+1)%n]+1){
                ans = false; break;
            }
        }

        ans ? cout<<"Yes\n" : cout<<"No\n";

    }

    return 0;
}