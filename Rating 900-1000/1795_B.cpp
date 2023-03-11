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
        int n, k, a, b;
        cin >> n >> k;
        bool ok1 = false, ok2 = false;

        for(int i=0 ; i<n ; i++){
            cin >> a >> b;
            if(a == k)
                ok1 = true;
            if(b == k)
                ok2 = true;
        }

        if(ok1 and ok2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}