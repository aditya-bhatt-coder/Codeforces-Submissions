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
        vector<vector<char>> v(8,vector<char> (8));

        for(int i=0 ; i<8 ; i++){
            string s;
            cin>>s;
            for(int j=0 ; j<8 ; j++){
                v[i][j] = s[j];
            }
        }
        
        char ans = 'R';

        for(int i=0 ; i<8 ; i++){
            int r=0;
            for(int j=0 ; j<8 ; j++){
                if(v[i][j]=='R')
                    r++;
            }
            if(r==8)
                ans = 'R';
        }

        for(int i=0 ; i<8 ; i++){
            int b=0;
            for(int j=0 ; j<8 ; j++){
                if(v[j][i]=='B')
                    b++;
            }
            if(b==8)
                ans = 'B';
        }

        cout<<ans<<'\n';
    }

    return 0;
}