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
        ll n,k; cin>>n>>k;
        vector<ll> a(n); map<int,int> m;
        for(int i=0 ; i<n ;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        bool f=false;
        for(int i=0 ; i<n ;i++)
            if(m[a[i]+k]>0){
                f=true; break;
            }
        
        f?cout<<"YES\n":cout<<"NO\n";
    }

    return 0;
}