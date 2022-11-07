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
        int n;cin>>n;
        string s1;cin>>s1;
        string s2;cin>>s2;
        bool ans = true;
        for(int i=0 ; i<n ; i++){
            if(s1[i]=='R' and s2[i]!='R'){
                ans = false;
                break;
            }
            if(s2[i]=='R' and s1[i]!='R'){
                ans = false;
                break;
            }
        }

        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}