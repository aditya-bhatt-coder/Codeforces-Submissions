//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll mn(ll a, ll b){
    if(a<b)
        return a;
    return b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        if(!(k*b<=s and s<=(k*b)+(n*(k-1)))){
            cout<<"-1\n";
            continue;
        }
        s = s-(k*b);
        for(int i=0 ; i<n ; i++){
            if(i==0){
                cout<<(k*b)+mn(k-1,s)<<" ";
                s = s-mn(s,k-1);
            }
            else{
                cout<<mn(s,k-1)<<" ";
                s = s-mn(s,k-1);
            }
        }
        cout<<"\n";
    }

    return 0;
}