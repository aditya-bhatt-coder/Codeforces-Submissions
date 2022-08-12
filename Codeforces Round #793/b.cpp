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
        for(int &i : a)
            cin>>i;
        
        vector<int> v;
        for(int i=0 ; i<n ; i++)
            if(a[i]!=i)
                v.push_back(a[i]);
        int ans = v[0];
        for(int i=1 ; i<v.size() ; i++)
            ans &= v[i];
        cout<<ans<<'\n';
    }

    return 0;
}