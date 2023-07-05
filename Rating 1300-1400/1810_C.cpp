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
        ll n, out, in;
        cin >> n >> out >> in;

        vector<ll> v, vv(n);
        ll ans = 0;

        for(ll &i : vv){
            cin >> i;
        }

        sort(vv.begin(), vv.end());

        for(int i=0 ; i<n ; i++){
            if(v.size() == 0 or v.back() != vv[i]){
                v.push_back(vv[i]);
            }
            else{
                ans += out;
            }
        }

        // cout << ans << "\n";
        // print(v);

        ll temp = 1e18;
        for(ll i=v.size() - 1 ; i>=0 ; i--){
            ll diff = v[i] - i - 1;
            temp = min(temp, diff*in + out*(v.size() - 1 - i));
            // cout << temp << "\n";
        }

        cout << min(ans + temp, in + n * out) << "\n";
    }

    return 0;
}