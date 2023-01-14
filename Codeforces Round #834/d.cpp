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
        ll n, m, k=1;
        cin >> n >> m;

        ll ans = n;

        while(n % 10 == 0)  n /= 10;

        while(n % 5 == 0){
            n /= 5;
            if(k * 2 <= m)
                k *= 2;
            else
                break;
        }

        while(n % 2 == 0){
            n /= 2;
            if(k * 5 <= m)
                k *= 5;
            else
                break;
        }

        while(k * 10 <= m){
            k *= 10;
        }

        k *= m/k;

        cout << ans * k << '\n';
    }

    return 0;
}