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
        int p, pw, d, dw, ans = 1;
        cin >> p >> d >> dw >> pw;

        vector<int> a(p);
        for(int &i : a)
            cin >> i;

        int ctr = 0;
        int pt = a[0] + pw;
        for(int i=0 ; i<p ; i++){
            if(ctr < d and a[i] <= pt){
                ctr++;
            }
            else{
                ans++;
                ctr = 1;
                pt = a[i] + pw + dw;
            }
            cout << ans << " " << ctr << " " << pt << "\n";
        }

        cout << ans << "\n";
    }

    return 0;
}