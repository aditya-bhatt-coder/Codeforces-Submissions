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
        int n; cin>>n;

        if(n % 2 == 0){
            cout << n/2 << ' ' << n/2 <<'\n';
            continue;
        }

        int root = sqrt(n);
        if(root * root == n){
            cout << root << " " << n-root << '\n';
            continue;
        }

        if(n % 5 == 0 and n>10){
            cout << 5 << ' ' << n-5 <<'\n';
            continue;
        }

        if(n % 3 == 0 and n>10){
            cout << n/3 << ' ' << (n/3)*2 <<'\n';
            continue;
        }

        cout<<"1 " << n-1<<'\n';
    }

    return 0;
}