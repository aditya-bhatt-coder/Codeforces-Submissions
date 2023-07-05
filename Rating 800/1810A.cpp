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
        vector<int> a(n);
        bool ok = false;

        for(int &i : a)
            cin >> i;

        for(int i=0 ; i<n ; i++){
            int val = i+1;
            if(a[i] <= val){
                ok = true;
            }
        }

        if(ok){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}