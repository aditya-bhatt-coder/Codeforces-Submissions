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
        int n,q;
        cin>>n>>q;
        vector<ll> a(n);
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
        for(int i=1 ; i<n ; i++)
            a[i]+=a[i-1];
        
        for(int _=0 ; _<q ; _++){
            int curr=0,ctr=0,qy;
            cin>>qy;
            auto it = lower_bound(a.begin(),a.end(),qy);
            if(it==a.end())
                cout<<-1<<'\n';
            else
                cout<<it-a.begin()+1<<'\n';
        }
    }

    return 0;
}