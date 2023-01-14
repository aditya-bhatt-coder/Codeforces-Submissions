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
        int n; cin>>n;

        vector<ll> a(n);
        for(ll &x : a) cin>>x;

        ll gcd = a[0], ans = 0;
        bool ok = true;

        for(int i=0 ; i<n ; i++){
            if(i % 2 == 0){
                gcd = __gcd(gcd,a[i]);
            }
        }

        for(int i=0 ; i<n ; i++){
            if(i % 2 != 0){
                if(a[i] % gcd == 0){
                    ok = false;
                    break;
                }
            }
        }

        if(ok){
            cout<<gcd<<'\n';
            continue;
        }

        gcd = a[1];
        ok = true;

        for(int i=0 ; i<n ; i++){
            if(i % 2 != 0){
                gcd = __gcd(gcd,a[i]);
            }
        }

        for(int i=0 ; i<n ; i++){
            if(i % 2 == 0){
                if(a[i] % gcd == 0){
                    ok = false;
                    break;
                }
            }
        }

        if(ok)
            cout<<gcd<<'\n';
        else
            cout<<"0\n";
    }

    return 0;
}