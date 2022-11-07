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
        string s; cin>>s;

        int ans = n+1;
        for(int i=0; i<2*n-1 ; i++)
            if (s[i]=='(' and s[i+1]==')')
                ans--;
        
        cout<<ans<<'\n';
    }

    return 0;
}