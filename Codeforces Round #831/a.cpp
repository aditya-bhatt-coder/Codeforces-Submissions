//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

bool ip(int x){
    for(int i=2 ; i<=sqrt(x) ; i++){
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;

        for(int i=2 ;  ; i++){
            if(ip(i+n)==false and ip(i)){
                cout<<i<<'\n';
                break;
            }
        }
    }

    return 0;
}