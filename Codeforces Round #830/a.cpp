// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

//--debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

ll cst = 0;
ll gcd(vector<ll> v, int i, int j){
    cst = 0;
    for(int it=i ; it<=j ; it++){
        v[it] = __gcd(v[it],it+1*1ll); 
        cst += v.size()-it;
    }
    ll ans = v[0];
    for(int it=0 ; it<v.size() ; it++){
        ans = __gcd(ans,v[it]);
    }
    // print(v);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
        ll ans = INT_MAX;
        
        vector<ll> v(n);

        for(ll &x : v) cin>>x;

        if(n == 1){
            v[0] == 1 ? cout<<0 : cout<<1;
            cout<<'\n';
            continue;
        }

        ll init = v[0];
        for(int it=0 ; it<v.size() ; it++)
            init = __gcd(init,v[it]);
        if(init == 1){
            cout<<"0\n";
            continue;
        }

        for(int i=0 ; i<n ; i++){
            for(int j=i ; j<n ; j++){
                // cout<<i<<" "<<j<<"\n";
                if(gcd(v,i,j)==1){
                    ans = min(ans,cst);
                    // cout<<ans<<'\n';
                }
            }
        }

        cout<<ans<<'\n';
    }

    return 0;
}