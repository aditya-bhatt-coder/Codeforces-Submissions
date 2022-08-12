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
        ll n,x,ans=0;
        cin>>n>>x;
        
        map<ll,ll> m;
        vector<ll> a(n);
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
            m[a[i]]++;
        }
        sort(a.begin(),a.end());

        for(int i=0 ; i<n ; i++){
            if(m[a[i]]==0)
                continue;
            if(m[a[i]*x]!=0){
                m[a[i]]--;
                m[a[i]*x]--;
            }
            else{
                ans++;
                m[a[i]]--;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}