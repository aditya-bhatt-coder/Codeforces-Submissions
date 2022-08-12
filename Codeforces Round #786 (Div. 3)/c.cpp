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
        string s,t; cin>>s>>t;
        int slen = s.length();
        int tlen = t.length();
        int tact = 0;
        for(int i=0 ; i<tlen ; i++)
            if(t[i]=='a')
                tact++;
        if(tact>0 && tlen>1)
            cout<<"-1\n";
        else if(tlen==1 && tact==1)
            cout<<"1\n";
        else if(tact==0){
            ll ans = pow(2,slen);
            cout<<ans<<'\n';
        }
    }

    return 0;
}