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
        
        vector<int> v(n);
        for(int &x : v) cin>>x;

        bool s = false;
        ll ans = 0;
        for(int i=0 ; i<n-1 ; i++){
            if(s and v[i] == 0)
                ans ++;
            if(v[i] > 0){
                ans += v[i];
                s = true;
            }
        }

        cout<<ans<<'\n';
    }

    return 0;
}