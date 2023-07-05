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
        ll n; cin >> n;

        if(n == 4){
            cout << "26\n";
            continue;
        }

        n -= 4;

        ll ans = 26;
        ans += (n * (2ll * 11ll + (n - 1ll) * 2ll)) / 2ll;


        cout << ans << "\n"; 
    }

    return 0;
}