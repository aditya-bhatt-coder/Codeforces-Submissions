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

        if(n == 1){
            cout << "1\n";
            continue;
        }

        if(n % 2 != 0){
            cout << "-1\n";
            continue;
        }

        for(int i=0 ; i<n ; i++){
            if(i == 0)
                cout << n << " ";
            else if(i % 2 == 0)
                cout << i << " ";
            else
                cout << n - i << " ";
        }

        cout <<"\n";
    }

    return 0;
}