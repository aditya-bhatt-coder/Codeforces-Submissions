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
        ll n,m;
        cin>>n>>m;
        if(n==1 and m==1){
            cout<<"0\n";
            continue;
        }
        if(n==1 or m==1){
            cout<<max(m,n)<<'\n';
            continue;
        }
        cout<<m+n-2+min(m,n)<<'\n';
    }

    return 0;
}