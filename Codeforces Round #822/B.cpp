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
        int n;
        cin>>n;

        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=i ; j++){
                if(j==1 or j==i){
                    cout<<1<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<'\n';
        }
    }

    return 0;
}