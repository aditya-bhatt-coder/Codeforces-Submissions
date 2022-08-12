#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll N,M,P;
    cin>>N>>M>>P;
    
    for(int i=1 ; i<N ; i++)
        M = round((M*P)/100);
    
    cout<<M;

    return 0;
}