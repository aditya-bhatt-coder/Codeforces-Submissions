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
        int a,b; cin>>a>>b;
        if(a==0)
            cout<<"1\n";
        else
            cout<<a*1+b*2+1<<'\n';
    }

    return 0;
}