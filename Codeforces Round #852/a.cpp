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
        ll a, b;
        cin >> a >> b;

        ll n, m;
        cin >> n >> m;

        ll c1 = 0, c2 = 0, c3 = 0, f1;

        {ll x = n/(m+1);
        ll buy = m * x;
        c1 = a * buy;
        ll have = buy + x;
        ll left = have == 0 ? n : n % have;
        c1 += a * left;}

        c2 = n * b;

        ll x = n/(m+1);
        ll buy = m * x;
        c3 = a * buy;
        ll have = buy + x;
        ll left = have == 0 ? n : n % have;
        c3 += b * left;

        // cout<<c1<<" "<<c2<<" "<<c3<<'\n';
        cout<<min({c1,c2,c3})<<'\n';

    }

    return 0;
}