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
        ll n,b,x,y; cin>>n>>b>>x>>y;
        vector<ll> v(n+1); v[0]=0;

        for(int i=1; i<=n ; i++){
            if(v[i-1]+x>b)
                v[i]=v[i-1]-y;
            else
                v[i]=v[i-1]+x;
        }
        ll sum=0;
        for(int i : v)
            sum+=i;
            //cout<<i<<" ";

        cout<<sum<<'\n';
    }

    return 0;
}