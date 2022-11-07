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
        if((m+n)%2==0)
            cout<<"Tonya\n";
        else
            cout<<"Burenka\n";
    }

    return 0;
}