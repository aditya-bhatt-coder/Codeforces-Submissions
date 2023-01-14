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
        ll ans = 0;

        vector<int> a(n);
        for(int &x : a) cin>>x;

        ll lt = 2 * a[0];

        sort(a.begin(),a.end());

        for(int i=1 ; i<n ; i++){
            ans += a[i]/(lt-1);
            if( a[i] % (lt-1) == 0)
                ans--;
        }

        cout<<ans<<'\n';
    }

    return 0;
}