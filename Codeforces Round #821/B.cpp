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
        ll n,x,y;
        cin>>n>>x>>y;

        if( (x==0 and y!=0) or (x!=0 and y==0) ){
            ll a = max(x,y);
            if( (n-1)%a == 0 ){
                for(int i=1 ; i<=n ; i+=a){
                    if(i==a+1)
                        i++;
                    if(i>n)
                        break;
                    for(int j=0 ; j<a ; j++)
                        cout<<i<<" ";
                }
                cout<<'\n';
            }
            else{
                cout<<"-1\n";
            }
        }

        else{
            cout<<"-1\n";
        }
    }

    return 0;
}