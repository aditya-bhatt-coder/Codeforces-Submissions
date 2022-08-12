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
        int a,b,c,d,ans=0;
        cin>>a>>b>>c>>d;
        if(b>a)
        ans++;
        if(c>a)
        ans++;
        if(d>a)
        ans++;
        cout<<ans<<'\n';
    }

    return 0;
}