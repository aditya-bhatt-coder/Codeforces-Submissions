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

map<ll, ll> m;

void f(ll n){
    while (n % 2 == 0){
        // cout << 2 << " ";
        m[2]++;
        n = n/2;
    }
 
    for (ll i = 3; i <= sqrt(n); i = i + 2){
        while (n % i == 0){
            // cout << i << " ";
            m[i]++;
            n = n/i;
        }
    }
 
    if (n > 2)
        // cout << n << " ";
        m[n]++;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        m.clear();
        ll n; cin>>n;
        ll ans = 0;
        f(n);

        while(m.size()){
            ll mn = INT_MAX, mf = INT_MAX;
            ll mul = 1;
            vector<ll> eraser;
            for(auto it : m){
                if(it.second < mf){
                    mf = it.second;
                    mn = it.first;
                }
            }
            for(auto &it : m){
                mul *= it.first;
                it.second -= mf;
                if(it.second == 0)
                    eraser.push_back(it.first);
            }
            ans += mul * mf;
            // cout<<ans<<'\n';
            for(auto er : eraser)
                m.erase(er);
        }

        cout<<ans<<"\n";
    }

    return 0;
}