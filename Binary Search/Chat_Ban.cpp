//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll k,x;
ll sumline(ll n){
    ll sum;
    if(n<=k){
        sum = (n*(n+1))/2;
    }else{
        sum = (k*(k+1))/2;
        sum += (k*(k-1))/2;
        ll rmv = (2*k-1)-n;
        sum -= sumline(rmv);
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        cin>>k>>x;
        // if(sumline(2*k-1)>x)
        ll l=0,r=2*k-1,mid,sum;
        while(l<r){
            mid = l+(r-l)/2;
            sum = sumline(mid);
            // cout<<l<<" "<<r<<" "<<mid<<" "<<sum<<'\n';
            if(sum>=x){
                r = mid;
            } else{
                l = mid+1;
            }
        }
        cout<<r<<'\n';

    }

    return 0;
}