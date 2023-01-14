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

        vector<int> d(n);
        for(int &x : d) cin>>x;

        bool ok = true;

        vector<int> a(n);
        a[0] = d[0];
        for(int i=1 ; i<n ; i++){
            if(d[i] <= a[i-1] and d[i] != 0){
                ok = false;
                break;
            }
            a[i] = d[i] + a[i-1];
        }

        if( ok )
            print(a);
        else
            cout<<"-1\n";
    }

    return 0;
}