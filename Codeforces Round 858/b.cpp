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
        int n;
        cin >> n;

        vector<int> v(n);
        int z = 0, o = 0, oth = 0;
        for(int &i : v){
            cin >> i;
            if(i == 0)  z++;
            else if(i == 1)  o++;
            else    oth++;
        }

        if(z < n/2){
            cout << "0\n";
            continue;
        }

        if(o == 1 and oth == 0){
            cout << "2\n";
            continue;
        }

        cout << "1\n";
    }

    return 0;
}