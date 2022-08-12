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
        int x,y; cin>>x>>y;
        if(x==0 and y==0)
            cout<<"0\n";
        else{
            ll i = (x*x)+(y*y);
            ll j = sqrt(i);
            if(j*j==i)
                cout<<"1\n";
            else
                cout<<"2\n";
        }

    }

    return 0;
}