#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0 ; i<n ; i++)
            cin>>v[i];
        sort(v.begin(),v.end(),greater<int>());
        cout<<v[0]+v[1]<<'\n';
    }

    return 0;
}