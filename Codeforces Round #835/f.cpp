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

    int tc;
    cin>>tc;
    while(tc--){
        ll n,c,d,sum=0; cin>>n>>c>>d;

        vector<ll> a(n);
        for(ll &x : a){
            cin>>x;
            sum += x;
        }

        sort(a.begin(),a.end());

        if(sum > c){
            cout<<"Infinity\n";
            continue;
        }

        if(d*a[n-1] < c){
            cout<<"Impossible\n";
            continue;
        }

        auto p = [&] (ll m){
            ll cst = 0;
            for(int i=0 ; i<d ; i++){
                continue;
            }
            return true;
        };

        ll l = 0, r = d;
        while(l < r){
            ll mid = (l+r)/2;
            if(p(mid)){
                l = 
            }
        }
    }

    return 0;
}