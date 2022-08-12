#include <bits/stdc++.h>
#define ll long long
using namespace std;

int calc(int k, int l, ll n, ll a[]){
    int r=l-k+1;
    for(int i=k ; i<=l ; i++)
        if(a[i]==0)
            r++;
        return r;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n, ans=0; cin>>n; ll a[n];
        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        for(int i=0 ; i<n ; i++)
            for(int j=i ; j<n ; j++)
                ans+=calc(i,j,n,a);

        cout<<ans<<"\n";
    }

    return 0;
}