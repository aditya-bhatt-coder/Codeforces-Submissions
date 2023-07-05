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
        string s; cin >> s;
        ll n = s.size();

        ll mx = 0, ctr = 0;
        for(int i = 0 ; i < 2 * s.size() + 1 ; i++){
            if(s[i%s.size()] == '1'){
                ctr++;
            }
            else{
                mx = max(mx, ctr);
                ctr = 0;
            }
        }
        mx = max(mx, ctr);

        if(mx >= s.size()){
            cout << n * n << "\n";
            continue;
        }

        if(mx == 0){
            cout << 0 << "\n";
            continue;
        }

        ll ans = mx;
        for(int i=1 ; i<mx ; i++){
            ans = max(ans, (mx - i)*(i + 1));
        }

        cout << ans << "\n";
    }

    return 0;
}