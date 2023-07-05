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
    // y = kx // y = ax2 + bx + c
    // kx = ax2 + bx + c => ax2 + (b-k)x + c = 0
    // (b - k)2 - 4ac < 0
    // find k nearest to b

    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);

    for(int i=0 ; i<n ; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    while(m--){
        ll a, b, c, k = INT_MAX;
        cin >> a >> b >> c;

        ll l = 0, r = n - 1;
        while(l <= r){
            ll mid = (l + r)/2;
            ll val = arr[mid];
            if(abs(val - b) < abs(b - k)){
                k = val;
            }
            if(val < b){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        if(pow(b - k, 2) < 4 * a * c){
            cout << "YES\n" << k << "\n";
        }
        else{
            cout << "NO\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}