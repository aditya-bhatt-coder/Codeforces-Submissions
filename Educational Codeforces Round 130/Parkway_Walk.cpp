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
        int n,m,ans=0; cin>>n>>m;
        vector<int> a(n);
        for(int &x : a){
            cin>>x;
            ans += x;
        }
        cout<<max(ans-m,0)<<'\n';
    }

    return 0;
}