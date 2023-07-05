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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ydiff = d - b;

        if(ydiff < 0){
            cout << "-1\n";
            continue;
        }

        a += ydiff;
        int xdiff = a - c;

        if(xdiff < 0){
            cout << "-1\n";
            continue;
        }

        cout << xdiff + ydiff << '\n';
    }

    return 0;
}