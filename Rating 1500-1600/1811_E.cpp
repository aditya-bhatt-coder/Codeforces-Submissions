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
        ll n; cin >> n;
        vector<int> v;

        while(n){
            v.push_back(n%9);
            n /= 9;
        }

        for(int i=v.size() - 1 ; i >= 0 ; i--){
            if(v[i] > 3){
                cout << v[i] + 1;
            }
            else{
                cout << v[i];
            }
        }

        cout << "\n";
    }

    return 0;
}