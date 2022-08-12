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
        ll m,ans;
        cin>>m;
        for(int i=1 ; i<=10 ; i++){
            if(m<pow(10,i)){
                ans = m - pow(10,i-1);
                break;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}