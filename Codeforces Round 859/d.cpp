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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        vector<ll> pre(n+1);

        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            pre[i+1] = pre[i] + a[i];
        }

        ll sum = pre[n];

        while(q--){
            ll l, r, k;
            cin >> l >> r >> k;

            ll minus = pre[r] - pre[l-1];
            ll plus = k * (r-l+1);
            ll tempSum = sum - minus + plus;

            if(tempSum % 2 != 0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }

    return 0;
}