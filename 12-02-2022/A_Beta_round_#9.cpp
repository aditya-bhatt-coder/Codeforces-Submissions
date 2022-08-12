#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int x, y, A, B; cin>>x>>y;
    A=6+1-max(x,y);
    
    if(A==6)
        cout<<"1/1";
    else if(A==5)
        cout<<"5/6";
    else if(A==4)
        cout<<"2/3";
    else if(A==3)
        cout<<"1/2";
    else if(A==2)
        cout<<"1/3";
    else if(A==1)
        cout<<"1/6";

    return 0;
}