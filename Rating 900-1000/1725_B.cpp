// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,d,ans=0; cin>>n>>d;

    vector<ll> v(n);
    for(ll &x : v) cin>>x;

    sort(v.begin(),v.end());

    int i=-1 , j=n-1;

    while(i<j){
        // cout<<i<<" "<<j<<'\n';
        ll mx = v[j];
        ll need = ceil( (d + 1) / (v[j]*1.0) ) - 1;
        // cout<<need<<'\n';
        if(i+need >= j) break;
        i = i + need;
        ans++; j--;
    }

    cout<<ans<<'\n';

    return 0;
}