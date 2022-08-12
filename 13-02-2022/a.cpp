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
        ll a[7];
        for(int i=0 ; i<7 ; i++)
            cin>>a[i];

        if(a[6]==a[0]+a[1]+a[2])
            cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        else if(a[6]==a[0]+a[1]+a[3])
            cout<<a[0]<<" "<<a[1]<<" "<<a[3]<<endl;
        else if(a[6]==a[0]+a[2]+a[3])
            cout<<a[0]<<" "<<a[2]<<" "<<a[3]<<endl;
    }

    return 0;
}