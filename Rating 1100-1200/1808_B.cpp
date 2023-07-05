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
        int c, r;
        cin >> c >> r;

        vector<vector<int>> a(r, vector<int>(c));
        ll ans = 0;

        for(int i=0 ; i<c ; i++){
            for(int j=0 ; j<r ; j++){
                cin >> a[j][i];
            }
        }

        for(int i=0 ; i<r ; i++){
            sort(a[i].begin(), a[i].end());
            for(int j=0 ; j<c ; j++){
                ll add = 1ll * a[i][j] * j * 1ll;
                ll sub = 1ll * a[i][j] * (c - j - 1) * 1ll;
                ans += add - sub;
            }
            // cout << i << " : " << ans << "\n";
        }

        cout << ans << "\n";
    }

    return 0;
}