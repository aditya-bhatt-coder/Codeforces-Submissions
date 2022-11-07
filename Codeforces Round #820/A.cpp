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
        ll a,b,c;
        cin>>a>>b>>c;
        
        ll t1 = abs(a-1);
        ll t2 = abs(b-c) + abs(c-1);

        if(t1>t2)
            cout<<"2\n";
        
        else if(t2>t1)
            cout<<"1\n";
        
        else
            cout<<"3\n";
    }

    return 0;
}