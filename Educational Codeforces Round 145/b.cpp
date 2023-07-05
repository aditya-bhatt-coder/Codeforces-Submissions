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
        //0 - 1
        //1 - 2,3,4
        //2 - 5,6,7,8,9
        //3 - 10,11,12,13,14,15,16

        ll n;   cin >> n;

        ll l = 1, r = 1e9;

        while(l <= r){
            ll mid = (l+r)/2;
            ll sq = mid * mid;
            
            if(sq >= n){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        cout << l - 1 << "\n";
    }

    return 0;
}