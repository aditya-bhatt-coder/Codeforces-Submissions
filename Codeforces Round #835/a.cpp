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

        vector<ll> v(n);
        for(ll &x : v) cin>>x;

        if(n == 1){
            cout<<"YES\n";
            continue;
        }

        ll ans = 0;
        
        int i = 0;
        int j = 0;
        while(j < n and i < n){
            while(j < n-1 and v[i]==v[j+1]) j++;
            if( (i == 0 or v[i-1] > v[i]) and (j == n-1 or v[j] < v[j+1]) ){
                ans++;
            }
            
            i = j+1;
            j = i;
        }

        if(ans != 1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}