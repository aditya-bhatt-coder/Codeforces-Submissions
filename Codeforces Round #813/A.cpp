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
        int n,k;
        cin>>n>>k;
        int ans=0;
        set<int> s;
        vector<int> a(n);
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        for(int i=0 ; i<k ; i++)
            s.insert(a[i]);
        for(int i=1 ; i<=k ; i++)
            if(s.find(i)==s.end())
                ans++;

        cout<<ans<<'\n';
    }

    return 0;
}