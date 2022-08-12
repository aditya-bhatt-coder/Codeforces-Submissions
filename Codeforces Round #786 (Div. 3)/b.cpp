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
        string s; cin>>s;
        int a = s[0]-97;
        int b = s[1]-96;
        int ans = a*26+b;
        if(s[0]<s[1])
        ans -= (a+1);
        else
        ans -= a;
        cout<<ans<<"\n";
    }

    return 0;
}