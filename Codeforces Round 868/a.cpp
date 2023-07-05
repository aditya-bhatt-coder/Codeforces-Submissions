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
    ll n, k;
    cin >> n >> k;

    for(ll i=0 ; i<=n ; i++){
        ll pos = i;
        ll neg = n - i;
        ll psum = (pos * (pos - 1)) / 2ll;
        ll nsum = (neg * (neg - 1)) / 2ll;
        if(k == psum + nsum){
            cout << "YES\n";
            for(int j=0 ; j<neg ; j++){
                cout << "1 ";
            }
            for(int j=0 ; j<pos ; j++){
                cout << "-1 ";
            }
            cout << "\n";
            return;
        }
    }

    cout << "NO\n";
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