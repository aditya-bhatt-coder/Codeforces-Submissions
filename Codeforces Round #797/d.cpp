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
    while(t--){
        int n,k,curr=0; cin>>n>>k;
        string s; cin>>s;
        for(int i=0 ; i<k ; i++)
            if(s[i]=='W')
                curr++;
        // cout<<curr<<'\n';
        int ans = curr;
        for(int i=k ; i<n ; i++){
            if(s[i]=='W')
                curr++;
            if(s[i-k]=='W')
                curr--;
            ans = min(ans,curr);
        }
        cout<<ans<<'\n';
    }

    return 0;
}