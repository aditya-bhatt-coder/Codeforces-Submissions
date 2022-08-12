#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n; cin>>n;
        if(n<4 or n%2!=0){cout<<"-1\n";continue;}
        ll mn,mx;
        //for max buses
        mx = n/4;
        //for min buses
        mn = n%6==0 ? n/6 : (n/6)+1;
        cout<<mn<<" "<<mx<<'\n';
    }

    return 0;
}