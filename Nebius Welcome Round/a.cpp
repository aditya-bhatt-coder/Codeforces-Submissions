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
        int a, b;
        cin >> a >> b;
        a = abs(a);
        b = abs(b);

        if(a == b){
            cout<<a+b<<'\n';
        }
        else if(a == 0 and b == 0){
            cout<<0<<'\n';
        }
        else if(a == 0){
            cout<<b*2-1<<'\n';
        }
        else if(b == 0){
            cout<<a*2-1<<'\n';
        }
        else{
            int x = min(a,b);
            int y = max(a,b);
            int ans = x*2 +1;
            x++;
            int rem = y - x;
            // cout<<x<<" "<<y<<" "<<rem<<" "<<ans<<" ";
            ans += rem * 2;
            cout << ans <<'\n';
        }
    }

    return 0;
}