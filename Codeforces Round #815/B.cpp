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
        int n; cin>>n;
        vector<ll> a(n);
        ll M1=INT_MIN,M2=INT_MIN,m1=INT_MAX,m2=INT_MAX;
        ll M1i=INT_MIN,M2i=INT_MIN,m1i=INT_MAX,m2i=INT_MAX;
        for(ll &i : a)  cin>>i;//INPUT
        //Max1
        for(int i=0 ; i<n ; i++){
            if(a[i]>M1){
                M1 = a[i];
                M1i = i;
            }
        }
        //Max2
        for(int i=0 ; i<n ; i++){
            if(a[i]>M2 and i!=M1i){
                M2 = a[i];
                M2i = i;
            }
        }
        //Min1
        for(int i=0 ; i<n ; i++){
            if(a[i]<m1 and i!=M1i and i!=M2i){
                m1 = a[i];
                m1i = i;
            }
        }
        //Min2
        for(int i=0 ; i<n ; i++){
            if(a[i]<m2 and i!=M1i and i!=M2i and i!=m1i){
                m2 = a[i];
                m2i = i;
            }
        }
        cout<<M1+M2-m1-m2<<'\n';
    }

    return 0;
}