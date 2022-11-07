//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        ll n; cin>>n;
        string s;cin>>s;
        vector<ll> ans(n,0);
        // vector<ll> v(n);

        //finding init total
        ll tot = 0;
        for(ll i=0 ; i<n ; i++){
            if(s[i]=='L'){
                // v[i] = i;
                tot += i;
            }else{
                // v[i] = n-i-1;
                tot += n-i-1;
            }
        }
        // cout<<tot<<'\n';

        int ind=0;

        for(int i=0 ; i<n/2 ; i++){ // check equal
                if(s[i]=='L'){
                    ans[ind] = tot - i;
                    ans[ind] += (n-i-1);
                    tot = ans[ind];
                    ind++;
                }

                if(s[n-i-1]=='R'){
                    ans[ind] = tot + (n-i-1);
                    ans[ind] -= i;
                    tot = ans[ind];
                    ind++;
                }
        }

        if(ind>0){
            ind--;
            for(int i=ind+1 ; i<n ; i++){
                ans[i] = ans[ind];
            }
        }else{
            for(int i=0 ; i<n ; i++)
                ans[i] = tot;
        }

        for(int i=0 ; i<n ; i++)
            cout<<ans[i]<<" ";
        cout<<'\n';

    }

    return 0;
}