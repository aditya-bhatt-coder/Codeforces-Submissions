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
        int n; cin >> n;
        vector<string> v(2*n-2);

        for(auto &i : v)
            cin>>i;

        sort(v.begin(), v.end(), [](string &a, string &b){
            return a.size() > b.size();
        });

        bool ok = true;

        for(int i=0 ; i<2*n-2 ; i+=2){
            reverse(v[i].begin(), v[i].end());
            if(v[i] != v[i+1]){
                ok = false;
                break;
            }
        }

        ok ? cout<<"YES\n" : cout<<"NO\n";
    }

    return 0;
}