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
        int n, ans = -1,x; cin>>n;
        
        map<int,int> m;
        
        for(int i=0 ; i<n ; i++){
            cin>>x;
            if(m[x])
                ans = max(ans, m[x] + (n - i - 1));
            m[x] = i + 1;
        }

        cout<<ans<<'\n';

    }

    return 0;
}