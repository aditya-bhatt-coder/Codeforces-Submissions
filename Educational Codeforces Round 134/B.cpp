//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int find_dist(int i, int j, int sx, int sy){
    return abs(i-sx)+abs(j-sy);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        sx--;sy--;
        int ans = m+n-2;

        int up = true;
        int dn = true;
        for(int i=0 ; i<m ; i++)
            if(find_dist(0,i,sx,sy)<=d){
                up = false;
                break;
            }
        for(int i=0 ; i<n ; i++)
            if(find_dist(i,m-1,sx,sy)<=d){
                up = false;
                break;
            }
        
        for(int i=0 ; i<n ; i++)
            if(find_dist(i,0,sx,sy)<=d){
                dn = false;
                break;
            }
        for(int i=0 ; i<m ; i++)
            if(find_dist(n-1,i,sx,sy)<=d){
                dn = false;
                break;
            }
        
        up or dn ? cout<<ans<<'\n' : cout<<"-1\n";
    }

    return 0;
}