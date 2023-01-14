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
        int n,r,b; cin>>n>>r>>b;
        int sp = b + 1;
        int mn = r / (b + 1);
        int more = r % (b + 1);

        // cout<<mn<<" "<<more<<'\n';

        string ans = "";

        for(int i=0 ; i<b ; i++){
            for(int j=0 ; j<mn ; j++)
                ans += 'R';
            if(more){
                more--;
                ans += 'R';
            }
            ans += 'B';
        }

        for(int j=0 ; j<mn ; j++)
            ans += 'R';

        cout<<ans<<'\n';
    }

    return 0;
}