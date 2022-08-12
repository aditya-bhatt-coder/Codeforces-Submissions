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
        string s; cin>>s;
        int n = s.length();
        int lz=0,lo=0,rz=0,ro=0,ans=0;
        for(int i=0 ; i<n ; i++){
            if(s[i]=='0')
                rz++;
            if(s[i]=='1')
                ro++;
        }
        for(int i=0 ; i<n ; i++){
            if(s[i]=='1'){
                ro--;
                if(lz==0 && ro==0)
                    ans++;
                lo++;
            }else if(s[i]=='0'){
                rz--;
                if(lz==0 && ro==0)
                    ans++;
                lz++;
            }else{
                if(lz==0 && ro==0)
                    ans++;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}