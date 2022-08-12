#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll sp=0, sd=0;
    for(int i=0 ; i<5 ; i++){
        ll t; cin>>t;
        sp+=t;
    }
    for(int i=0 ; i<5 ; i++){
        ll t; cin>>t;
        sd+=t;
    }

    if(sp<sd)   cout<<"petrol";
    else    cout<<"diesel";
    
    return 0;
}