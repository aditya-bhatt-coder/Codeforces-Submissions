// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

//--debug--
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

        for(int &x : v)
            cin>>x;

        sort(v.begin(),v.end());
    
        int ans = v[n-1] - v[0];
        for (int i=0 ; i<n-1 ; i++)
            ans = max({ans, v[i+1] + v[n-1] - 2*v[i], 2*v[i+1] - v[i] - v[0]});
        
        cout<<ans<<"\n";
    }

    return 0;
}