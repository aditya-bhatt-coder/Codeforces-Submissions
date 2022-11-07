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
        string s; cin>>s;
        int v = 0;

        for(int i=0 ; i<n ; i++){
            if(s[i] == 'Q')
                v++;
            else
                v = max(0,v-1);
        }

        if(v > 0)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }

    return 0;
}