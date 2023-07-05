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
        int n, k;
        cin >> n >> k;
        vector <int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            p[i]--;
        }

        int bad = 0;
        for (int i=0; i<n; i++) {
            if (p[i] % k != i % k) {
                bad++;
            }
        }

        if(bad == 0)
            cout << 0 << '\n';
        else if(bad == 2)
            cout << 1 << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}