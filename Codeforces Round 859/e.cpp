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

void solve(){
    int n; cin >> n;
    vector<int> a(n+1);

    for(int i=1 ; i<=n ; i++)
        cin >> a[i];

    int l = 1, r = n;

    while(l <= r){
        int mid = l + (r - l)/2;

        ll sum = 0;
        cout << "? " << mid - l + 1 ;
        for(int i=l ; i<=mid ; i++){
            cout << " " << i;
            sum += a[i];
        }
        cout << endl;

        ll inp; cin >> inp;

        if(sum != inp){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    cout << "! " << l << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}