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
        ll n,k;
        cin>>n>>k;
        
        if(k%2!=0){ //if k=odd
            cout<<"YES\n";
            for(int i=1 ; i<=n ; i+=2){
                cout<<i<<" "<<i+1<<'\n';
            }
        }
        //k is even
        else{
            if(k%4!=0){
                cout<<"YES\n";
                for(int i=1 ; i<=n ; i+=2){
                    if((i+1)%4==0)
                    cout<<i<<" "<<i+1<<'\n';
                    else
                    cout<<i+1<<" "<<i<<'\n';
            }
            }else{
                cout<<"NO\n";
            }
        }
    }

    return 0;
}