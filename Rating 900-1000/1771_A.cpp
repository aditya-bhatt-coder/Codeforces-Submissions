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

        sort(v.begin(), v.end());

        if(v[0] == v[n-1]){
            ll ans = n;
            ans = ans * (n - 1);
            cout<< ans <<'\n';
            continue;
        }

        int minf = count(v.begin(), v.end(), v[0]);
        int maxf = count(v.begin(), v.end(), v[n-1]);

        ll ans = maxf * 2 ;
        ans *= minf;
        cout<<ans<< '\n';
    }

    return 0;
}