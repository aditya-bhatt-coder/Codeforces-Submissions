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

void solve(){
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), b(n), pre(n + 1);

    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for(int i=0 ; i<n - 2 ; i++){
        if(a[i] >= a[i + 1] and a[i + 1] >= a[i + 2]){
            b[i + 2] = 1;
        }
    }
    for(int i=0 ; i<n ; i++){
        pre[i + 1] = pre[i] + b[i];
    }

    // cout << "done\n";

    while(q--){
        ll l, r;
        cin >> l >> r;
        l--; r--;

        ll ans = r - l + 1;

        if(ans == 1 or ans == 2){
            cout << ans <<"\n";
            continue;
        }

        ans -= pre[r + 1] - pre[l];
        if(b[l] == 1){
            ans++;
        }
        if(b[l + 1] == 1){
            ans++;
        }

        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}