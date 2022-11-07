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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n+1);
        for(int i=1 ; i<=n ; i++)cin>>v[i];

        if(k==1 or k==n){
            cout<<"YES\n";
            continue;
        }
        bool f = false;
        ll l=k-1, r=k+1, lsum=v[l], rsum=v[r], pwn=v[k];
        while(l!=0 and r!=n+1){
            // cout<<pwn<<" "<<l<<" "<<lsum<<" "<<r<<" "<<rsum<<'\n';

            if(max(lsum,rsum)+pwn<0){f=true;break;}

            if(lsum>0){
                pwn+=lsum;
                lsum = 0;
            }

            if(rsum>0){
                pwn+=rsum;
                rsum = 0;
            }

            if(lsum>rsum){
                l--;
                if(l==0)break;
                lsum+=v[l];
                continue;
            }

            if(lsum<=rsum){
                r++;
                if(r==n+1)break;
                rsum+=v[r];
                continue;
            }
        }

        ll mxsum = max(lsum,rsum);

        if(mxsum+pwn<0 or f){
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";
    }

    return 0;
}