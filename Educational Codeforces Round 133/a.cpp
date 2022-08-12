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
        ll n;
        cin>>n;
        if(n==1){
            cout<<"2\n";
            continue;
        }
        if(n==2 or n==3){
            cout<<"1\n";
            continue;
        }
        ll ans = n/3;
        if(n%3!=0){
            ans+=1;
        }
        cout<<ans<<'\n';
        
    }

    return 0;
}