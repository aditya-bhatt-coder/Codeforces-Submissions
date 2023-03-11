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
        string s; cin >> s;

        int ctr = 1;
        cout << "1 ";
        for( int i = 1 ; i < n - 1 ; i++ ){
            if(s[i] != s[i - 1])
                ctr = i + 1;
            cout << ctr << " ";
        }
        cout << "\n";
    }

    return 0;
}