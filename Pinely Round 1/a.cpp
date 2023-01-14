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
        int n,a,b; cin>>n>>a>>b;

        if(n == a and a == b){
            cout<<"Yes\n";
            continue;
        }

        if(n - a - b >= 2){
            cout<<"Yes\n";
            continue;
        }

        cout<<"No\n";
    }

    return 0;
}