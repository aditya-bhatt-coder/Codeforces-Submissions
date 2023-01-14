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

    int n,m; cin>>n>>m;

    vector<ll> a(n),t(n),f(n+1),b(n+1);
    for(ll &x : a) cin>>x;

    for(int i=0 ; i<n-1 ; i++){
        t[i+1] = max(0ll, a[i] - a[i+1]);
    }

    for(int i=0 ; i<n ; i++){
        f[i+1] = f[i] + t[i];
    }

    reverse(a.begin(),a.end());

    for(int i=0 ; i<n-1 ; i++){
        t[i+1] = max(0ll, a[i] - a[i+1]);
    }

    for(int i=0 ; i<n ; i++){
        b[i+1] = b[i] + t[i];
    }

    // print(f);
    // print(b);

    for(int i=0 ; i<m ; i++){
        int l,r; cin>>l>>r;
        if(l<r){ // forward
            cout<<f[r] - f[l]<<'\n';
        }
        else{ // backward
            cout<<b[n - r + 1] - b[n - l + 1]<<'\n';
        }
    }

    return 0;
}