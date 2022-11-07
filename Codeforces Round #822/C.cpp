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
        int n;ll ans = 0;
        cin>>n;
        string str; cin>>str;
        vector<int> v(n+1,-1);
        for(int i=0 ; i<n ; i++)
            v[i+1] = str[i]=='0' ? 0 : 1;

        for(int i=1 ; i<=n ; i++){
            for(int j=1 ;  ; j++){
                ll lol = i*j;
                if(lol>n)
                    break;
                if(v[lol]==1)
                    break;
                if(v[lol]==-1)
                    continue;
                if(v[lol]==0){
                    v[lol] = -1;
                    ans+=i;
                }
            }
        }

        cout<<ans<<'\n';
    }

    return 0;
}