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

    for(auto &i : a)
        cin >> i;

    if(n % 2 != 0){
        cout << "YES\n";
        return;
    }

    for(int i=1 ; i<n - 1 ; i++){
        ll d = a[i - 1] - a[i];
        a[i] += d;
        a[i + 1] += d;
    }

    if(a[n - 2] <= a[n - 1]){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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