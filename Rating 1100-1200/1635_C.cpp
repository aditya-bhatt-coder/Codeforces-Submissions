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

        vector<ll> a(n);
        for(ll &x : a) cin>>x;

        ll ind = n - 2;
        bool ok = true;
        vector<vector<ll>> ans;
        set<vector<ll>> s;
        s.insert({a[n - 1], n - 1});

        while(ind >= 0){
            if(a[ind] > a[ind + 1]){
                if(ind == n - 2){
                    ok = false;
                    break;
                }
                a[ind] = (*s.begin())[0] - (*s.rbegin())[0];
                int mn = min( (*s.rbegin())[1], (*s.begin())[1]);
                int mx = max( (*s.rbegin())[1], (*s.begin())[1]);
                ans.push_back({ind, mn, mx});
                // print(a);
                // cout<<mn<<" "<<mx<<'\n';
                s.insert({a[ind],ind});
            }
            else{
                s.insert({a[ind],ind});
            }
            ind -- ;
        }

        if(ok == false or !is_sorted(a.begin(),a.end())){
            cout<<"-1\n";
        }else{
            cout<<ans.size()<<'\n';
            for(int i=0 ; i<ans.size() ; i++)
                cout<<ans[i][0] + 1 <<" "
                    <<ans[i][1] + 1 <<" "
                    <<ans[i][2] + 1 <<'\n';
        }
    }

    return 0;
}