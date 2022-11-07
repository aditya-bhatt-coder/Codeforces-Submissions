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

    int tc;
    cin>>tc;
    while(tc--){
        int T=0,i=0,m=0,u=0,r=0;
        int n;cin>>n;
        string s; cin>>s;
        if(n!=5){
            cout<<"NO\n";
            continue;
        }
        for(auto c : s){
            if(c=='T')
                T++;
            if(c=='i')
                i++;
            if(c=='m')
                m++;
            if(c=='u')
                u++;
            if(c=='r')
                r++;
        }
        if(T==1 and i==1 and m==1 and u==1 and r==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}