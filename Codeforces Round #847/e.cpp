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
        ll n; cin>>n;

        if(n%2 != 0){
            cout<<"-1\n";
            continue;
        }

        ll sum = 2 * n;
        ll a = n/2;
        ll b = sum - a;

        if((a^b) == n){
            cout<<a<<" "<<b<<'\n';
            continue;
        }

        cout<<"-1\n";

    }

    return 0;
}