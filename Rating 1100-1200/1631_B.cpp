// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> bool aq(vector<dt> v){
    for(dt i=0 ; i<v.size()-1 ; i++)
        if(v[i] != v[i+1])
            return false;
    return true;
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

        vector<int> a(n);
        for(int &x : a) cin>>x;

        int c = 0, tbh = a[n - 1];
        for(int i=n-2 ; i>=0 ; i--){
            if(a[i] != a[i + 1])
                break;
            c ++ ;
        }

        c++;
        ll ans = 0;

        while(!aq(a)){
            c = min(c * 2, n);
            for(int i=0 ; i<c ; i++){
                a[n - 1 - i] = tbh;
            }
            ans++;
            // cout<<"hi\n";
        }

        cout<<ans<<'\n';

    }

    return 0;
}