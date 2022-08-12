//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

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
        int sum = 0,t;
        for(int i=0 ; i<=3 ; i++){
            cin>>t;
            sum+=t;
        }
        if(sum==0)
            cout<<"0\n";
        else if(sum==4)
            cout<<"2\n";
        else
            cout<<"1\n";
    }

    return 0;
}