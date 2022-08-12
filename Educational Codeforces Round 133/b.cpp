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
        int n; cin>>n;
        cout<<n<<'\n';
        vector<vector<int>> ans;
        for(int i=0 ; i<n ; i++){
            vector<int> t;
            int ctr=2;
            for(int j=0 ; j<n ; j++){
                if(j==i)
                    t.push_back(1);
                else{
                    t.push_back(ctr);
                    ctr++;
                }
            }
            ans.push_back(t);
        }

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                cout<<ans[i][j]<<" ";
            }cout<<'\n';
        }

    }

    return 0;
}