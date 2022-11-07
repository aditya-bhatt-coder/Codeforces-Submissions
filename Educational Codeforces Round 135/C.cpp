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
        int n, ans=0; cin>>n;
        priority_queue<ll> a,b;

        for(int i=0 ; i<n ; i++){
            ll t; cin>>t;
            a.push(t);
        }

        for(int i=0 ; i<n ; i++){
            ll t; cin>>t;
            b.push(t);
        }

        while(!a.empty()){
            ll x = a.top();
            ll y = b.top();
            // cout<<x<<" "<<y<<'\n';
            if(x>y){
                a.pop();
                a.push(to_string(x).size());
                ans++;
            }
            else if(x<y){
                b.pop();
                b.push(to_string(y).size());
                ans++;
            }
            else{
                a.pop();
                b.pop();
            }
        }

        cout<<ans<<'\n';
    }

    return 0;
}