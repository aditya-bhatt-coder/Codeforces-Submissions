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

        for(int &i : v)
            cin>>i;

        int gcd = v[0];

        for(int i=1 ; i<n ; i++){
            gcd = __gcd(gcd, v[i]);
        }

        cout<<v[v.size()-1]/gcd<<'\n';
    }

    return 0;
}