#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
       cin>>n;
       string s;
       cin>>s;
       bool flag=true;
       for(int i=0;i<n;i++)
       {
           while(i<n && s[i]=='W') i++;
           if(i==n) break;
           int blue=0,red=0;
           while(i<n && s[i]!='W')
           {
               if(s[i]=='R') red++;
               else blue++;
               i++;
           }
           if(red==0 || blue==0)
           {
               flag=false;
               break;
           }
       }
       if(flag) cout<<"YES"<<'\n';
       else cout<<"NO"<<'\n';
    }

    return 0;
}