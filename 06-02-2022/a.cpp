#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, k;
        string s;
        cin>>n>>k>>s;

        string t=s;
        reverse(t.begin(),t.end());

        if( t==s || k==0 )
            cout<<"1\n";
        else
            cout<<"2\n";
    }

    return 0;
}