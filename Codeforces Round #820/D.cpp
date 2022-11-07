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
        vector<ll> s(n),b(n),p(n);
        for(auto &i : s)cin>>i;
        for(auto &i : b)cin>>i;
        for(int i=0 ; i<n ; i++)
            p[i] = b[i] - s[i];
        
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        ll sum = 0;

        // for(auto i : p)
        // cout<<i<<" ";
        // cout<<'\n';

        int ppl = 0;
        int l=0, r=n-1;
        while(l<r){
            if(p[l]+p[r]>=0){
                ppl++;
                l++;r--;
            }
            else{
                r--;
            }
        }

        cout<<ppl<<'\n';
    }

    return 0;
}