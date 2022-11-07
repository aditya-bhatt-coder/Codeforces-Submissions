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
        
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        
        ll m1 = a*d;
        ll m2 = b*c;
        
        if(m1==0 and m2==0){
            cout<<"0\n";
        }else if(m1==0 or m2==0){
            cout<<"1\n";
        }else if(m1<m2){
            if(m2%m1==0)
                cout<<1<<'\n';
            else
                cout<<2<<'\n';
        }else if(m1>m2){
            if(m1%m2==0)
                cout<<1<<'\n';
            else
                cout<<2<<'\n';
        }else{
            cout<<0<<'\n';
        }
    }

    return 0;
}