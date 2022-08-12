#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int a[4],t=false,s=false;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);

    for(int i=0; i<2 ; i++){
        if(a[i+0]+a[i+1]>a[i+2] && a[i+2]+a[i+1]>a[i+0] && a[i+0]+a[i+2]>a[i+1]){
            t=true; break;
        }
        if(a[i+0]+a[i+1]>=a[i+2])
            if(a[i+2]+a[i+1]>a[i+0] && a[i+0]+a[i+2]>a[i+1])
                s=true;
        if(a[i+2]+a[i+1]>=a[i+0])
            if(a[i+0]+a[i+1]>a[i+2] && a[i+0]+a[i+2]>a[i+1])
                s=true;
        if(a[i+0]+a[i+2]>=a[i+1])
            if(a[i+0]+a[i+1]>a[i+2] && a[i+2]+a[i+1]>a[i+0])
                s=true;
    }

    if(t)   cout<<"TRIANGLE";
    else if(s)   cout<<"SEGMENT";
    else    cout<<"IMPOSSIBLE";
    return 0;
}