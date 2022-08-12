#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n; cin>>n; vector<ll> a(n);
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        sort(a.begin(),a.end());

        bool found = false;
        ll ptr1=0, ptr2=n-1, sum1=0, sum2=0, c1=0, c2=0;
        while(ptr1<=ptr2){
            sum1 += a[ptr1];
            ptr1++; c1++;
            if(c1>c2 and sum1<sum2){
                cout<<"YES\n";
                found = true; break;
            }
            sum2 += a[ptr2];
            ptr2--; c2++;
        }
        if(!found)
            cout<<"NO\n";
    }

    return 0;
}