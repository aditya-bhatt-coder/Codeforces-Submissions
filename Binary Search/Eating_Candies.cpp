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
        int n; cin>>n;
        vector<int> a(n);
        for(int &i : a)
            cin>>i;
        int l=0, r=n-1;
        ll lsum=a[0],rsum=a[n-1],tot=2,ans=0;
        while(l<r){
            // cout<<lsum<<" "<<rsum<<" "<<l<<" "<<r<<" "<<tot<<" "<<ans<<'\n';
            if(lsum==rsum){
                ans = tot;
                l++;r--;tot+=2;
                lsum+=a[l];
                rsum+=a[r];
            }
            else if(lsum<rsum){
                l++;tot++;lsum+=a[l];
            }
            else if(lsum>rsum){
                r--;tot++;rsum+=a[r];
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}