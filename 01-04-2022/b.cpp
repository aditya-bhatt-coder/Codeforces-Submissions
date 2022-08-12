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
        sort(v.begin(),v.end());
        if(n==1){
            if(v[0]>1)
                cout<<"NO\n";
            else 
                cout<<"YES\n";
        }
        else if(v[n-1]-v[n-2]<2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}