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
        ll hc,dc,hm,dm;
        cin >> hc >> dc >> hm >> dm;

        ll k,d,h;
        cin >> k >> d >> h;

        bool ok = false;

        for(int i=0 ; i<=k ; i++){
            ll ttkm = ceil( hm / (dc + (i * d * 1.0) ) );
            ll ttkc = ceil( (hc + ((k - i) * h * 1.0) ) / dm );
            if(ttkm <= ttkc){
                ok = true;
                break;
            }
        }

        ok ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}