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

ll f(vector<ll> &v, vector<ll> &xr, vector<ll> &pre, int i, int j){
    ll sum = pre[j+1] - pre[i];
    ll x = xr[j+1] ^ xr[i];
    // cout<<sum<<" "<<x<<'\n';
    return sum - x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n,q,l,r;
        cin>>n>>q;
        
        vector<ll> a(n),xr(n+1),pre(n+1);
        for(ll &x : a) cin>>x;
        cin>>l>>r; l--; r--;

        for(int i=0 ; i<n ; i++){
            pre[i+1] = a[i] + pre[i];
            xr[i+1] = a[i] ^ xr[i];
        }

        ll ans = INT_MIN;
        int i = 0, j = 0;

        // while(j<n and i<n){
        //     cout<<i<<" "<<j<<" "<<ans<<' '<<l<<" "<<r<<'\n';
        //     ll temp = f(a, xr, pre, i, j);
        //     if(temp == ans){
        //         ll lold = r - l + 1;
        //         ll lnew = j - i + 1;
        //         if(lnew < lold){
        //             l = i;
        //             r = j;
        //         }
        //         if(j<n-1)j++;
        //         else i++;
        //     }
        //     else if(temp > ans){
        //         ans = temp;
        //         l = i;
        //         r = j;
        //         if(j<n-1)j++;
        //         else i++;
        //     }
        //     else{
        //         if(i == j){j++;}
        //         i++;
        //     }
        // }

        vector<ll> v;
        for(int i=0 ; i<n ; i++){
            v.push_back(f(a, xr, pre, i, n-1));
            ans = max(ans, v[i]);
        }

        for(int i=0 ; i<v.size() ; i++){
            if(v[i] == ans){
                // cout<<i<<'\n';
                for(int j=i ; j<n ; j++){
                    if(f(a, xr, pre, i, j) == ans){
                        ll lold = r - l + 1;
                        ll lnew = j - i + 1;
                        if(lnew < lold){
                            l = i;
                            r = j;
                        }
                        break;
                    }
                }
            }
        }

        cout<< l+1 << " " << r+1 << '\n';//<< ans;
    }

    return 0;
}