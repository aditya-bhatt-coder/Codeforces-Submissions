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
        int mx, mn;
        cin >> mx >> mn;
        ll sz = abs(mx - mn);
        cout << 2LL * sz << '\n';

        for(int i=mx ; i>mn ; i--){
            cout<<i<<" ";
        }
        for(int i=mn ; i<mx ; i++){
            cout<<i<<" ";
        }

        cout<<'\n';
    }

    return 0;
}