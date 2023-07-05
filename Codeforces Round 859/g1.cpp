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
    int n; cin >> n;
    vector<ll> a(n);

    for(ll &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    if(n == 1){
        if(a[0] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
        return;
    }

    ll sum = 1;

    for(int i=1 ; i<n ; i++){
        ll val = a[i];
        if(val > sum){
            cout << "NO\n";
            return;
        }
        sum += val;
    }

    cout << "YES\n";
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