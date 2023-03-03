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
        char c; cin>>c;
        if(c == 'c' or c == 'o' or c == 'd' or c == 'e' or c == 'f' or c == 'r' or c == 's')
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}