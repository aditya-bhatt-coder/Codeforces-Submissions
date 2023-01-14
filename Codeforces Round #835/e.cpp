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

ll f(vector<int> &arr, int n){
    int z = 0;
    ll ans = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i] == 0)
            z++;
    }

    for(int i=0 ; i<n ; i++){
        if(arr[i] == 0)
            z--;
        else
            ans += z;
    }

    return ans;
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
        
        vector<int> v1(n), v2(n), v3(n);
        for(int i=0 ; i<n ; i++){
            int x;
            cin>>x;
            v1[i] = x;
            v2[i] = x;
            v3[i] = x;
        }
        for(int i=0 ; i<n ; i++)
            if(v2[i] == 0){
                v2[i] = 1;
                break;
            }
        for(int i=n-1 ; i>=0 ; i--)
            if(v3[i] == 1){
                v3[i] = 0;
                break;
            }
        ll a1 = f(v1,n);
        ll a2 = f(v2,n);
        ll a3 = f(v3,n);

        cout<<max({a1,a2,a3})<<'\n';
    }

    return 0;
}