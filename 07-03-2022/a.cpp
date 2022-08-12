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
        ll n, s, ans;
        cin>>n>>s;
        ans = s/(n*n);
        cout<<ans<<'\n';
    }

    return 0;
}