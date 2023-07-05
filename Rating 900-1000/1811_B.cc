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
        ll n, x1, x2, y1, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        n /= 2;

        if(x1 > n)
            x1 = (n) - (x1 - n) + 1;
        if(x2 > n)
            x2 = (n) - (x2 - n) + 1;
        if(y1 > n)
            y1 = (n) - (y1 - n) + 1;
        if(y2 > n)
            y2 = (n) - (y2 - n) + 1;

        ll start = min(x1, y1);
        ll end = min(x2, y2);

        cout << (abs(start - end)) << '\n';
    }

    return 0;
}