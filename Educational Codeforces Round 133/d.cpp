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

    
        ll n, k;
        cin>>n>>k;
        vector<int> a(n+1,0);
        
        for(int i=1 ;  ; i++){
            ll tk = k*i;
            if(tk>n)
                break;
            ll ind = tk;
            ll ctr = 1;
            while(ind<=n){
                cout<<ind<<" ";
                a[ind]++;
                ind = ind + tk + ctr;
                ctr++;
            }
        }
        cout<<'\n';
        for(auto x : a)
            cout<<x<<" ";
        cout<<'\n';

    return 0;
}