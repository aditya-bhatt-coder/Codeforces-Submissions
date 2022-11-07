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
        int n;
        cin>>n;
        vector<int> v;
        for(int i=1 ; i<=n ; i++)
            v.push_back(i);
        for(int i=n-2 ; i>=0 ; i-=2)
            swap(v[i],v[i+1]);

        for(int i=0 ; i<n ; i++)
            cout<<v[i]<<" ";
        
        cout<<'\n';
    }

    return 0;
}