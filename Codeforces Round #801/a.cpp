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
        int n,m,r,c;
        cin>>n>>m;
        ll mx=INT_MIN;
        vector<vector<ll>> a(n, vector<ll> (m,0));
        for(int i=0 ; i<n ; i++)
            for(int j=0 ; j<m ; j++){
                cin>>a[i][j];
                if(a[i][j]>mx){
                    mx = a[i][j];
                    r = i;
                    c = j;
                }
            }
        int ansr = max(r+1,n-r);
        int ansc = max(c+1,m-c);

        cout<<ansr*ansc<<'\n';
    }

    return 0;
}