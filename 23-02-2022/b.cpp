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
        ll n; cin>>n; map<ll,ll> m;
        for(int i=0 ; i<n ; i++){
            ll t; cin>>t;
            m[t]++;
        }
        map<ll,ll> :: iterator it;

        for(int k=0 ; k<n ; k++){
            ll ctr=0;
            for(it=m.begin() ; it!=m.end() ; it++){
                if(it->second==k)
                    ctr++;
                
            }

        }
        
    }

    return 0;
}