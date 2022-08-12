#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll ans;
    int d, r1, r2;
    char c1, c2;

    cin>>d>>c1>>c2>>r1>>r2;

    ans = d* (c2-c1+1) *(c2-c1+1);
    ans *= (r2-r1+1) * (r2-r1+1) * (r2-r1+1) * (r2-r1+1);

    cout<<ans;

    return 0;
}