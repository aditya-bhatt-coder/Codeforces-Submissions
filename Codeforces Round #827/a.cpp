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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b+c or b==a+c or c==a+b)
            cout<<"YES\n";
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}