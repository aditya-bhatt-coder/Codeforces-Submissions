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

    int t;
    cin>>t;
    while(t--){
        ll n,e=0,o=0,ro=0,op=0; cin>>n;
        vector<ll> a(n);
        for(ll &x : a){
            cin>>x;
            ro |= x;
            if(x%2==0)
                e++;
            else
                o++;
        }

        //all even
        if(o==0){
            while(ro%2==0){
                op++;
                ro = ro>>1;}
            op += e-1;
        } else{ //atleast one odd
            op += e;
        }
        cout<<op<<'\n';
    }

    return 0;
}