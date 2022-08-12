//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        string temp;
        string s[8];
        // cin>>temp;
        for(int i=0 ; i<8 ; i++){
            cin>>s[i];
        }
    // cout<<"hello";
        for(int i=1 ; i<7 ; i++){
            for(int j=1 ; j<7 ; j++){
                // cout<<s[i][j]<<" ";
                if(s[i][j]=='#' and s[i+1][j+1]=='#' and s[i-1][j-1]=='#' and s[i+1][j-1]=='#' and s[i-1][j+1]=='#'){
                    cout<<i+1<<" "<<j+1<<'\n';
                    break;
                }
            }
        }
    }

    return 0;
}