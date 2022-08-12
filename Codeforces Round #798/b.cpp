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
        vector<int> a(n);
        for(int &x : a) cin>>x;
        if(n==1){
            cout<<"-1\n";
            continue;
        }
        vector<int> ans(n);
        iota(ans.begin(),ans.end(),1);
        for(int i=0 ; i<n ; i++)
            if(a[i]==ans[i]){
                if(i<n-1)
                    swap(ans[i],ans[i+1]);
                else
                    swap(ans[i],ans[i-1]);
            }
        
        for(int x : ans)
            cout<<x<<" ";
        cout<<'\n';

    }

    return 0;
}