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
        int n; cin>>n;
        vector<vector<int>> a(n, vector<int> (n,0));
        for(int i=0 ; i<n ; i++){
            string s; cin>>s;
            for(int j=0 ; j<n ; j++){
                if(s[j]=='1')
                    a[i][j] = 1;
            }
        }
        int ans=0;

        for(int i=0 ; i<n-1 ; i++){
            for(int j=i ; j<n-1-i ; j++){
                int sum = a[i][j] + a[j][n-i-1] + a[n-i-1][n-j-1] + a[n-j-1][i];
                if(sum==2)
                    ans+=2;
                if(sum==1 or sum==3)
                    ans+=1;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}