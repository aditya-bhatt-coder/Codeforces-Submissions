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
        int n, t;
        cin >> n >> t;
        int ans = -2;
        int e = 0;

        vector<int> a(n), b(n);

        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            a[i] = a[i] + i;
        }
            
        for(int &i : b)
            cin >> i;

        for(int i=0 ; i<n ; i++){
            if(a[i] <= t and b[i] > e){
                e = b[i];
                ans = i;
            }
        }

        cout << ans + 1 << "\n";

    }

    return 0;
}