//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// void print(vector<ll> &v){
//     for(int i=0 ; i<v.size() ; i++)
//         cout<<v[i]<<" ";
//     cout<<'\n';
// }

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        ll n,k;
        cin>>n>>k;

        vector<ll> v(k);
        for(ll &i : v)cin>>i;

        if(n==1 or k==1){
            cout<<"YES\n";
            continue;
        }

        for(int i=k-1 ; i>0 ; i--){
            v[i] = v[i] - v[i-1];
        }

        // print(v);

        ll f = v[0];
        v[0] = INT_MIN;
        ll l = n-k;

        if(!is_sorted(v.begin(),v.end())){
            cout<<"NO\n";
        }
        else if(f <= (l+1)*v[1]){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}