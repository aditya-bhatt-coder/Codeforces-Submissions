#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n; cin>>n; vector<ll> a(n);
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        
        if(!is_sorted(a.begin(),a.end()))
            cout<<"YES\n";

        else
            cout<<"NO\n";
    }

    return 0;
}