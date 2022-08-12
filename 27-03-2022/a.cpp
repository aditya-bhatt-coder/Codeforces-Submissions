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
        int n,ans=0,st=-1,end=-1; cin>>n;
        string s; cin>>s;

        for(int i=0 ;i<s.length() ; i++){
            if(s[i]=='0'){
                st=end; end=i;
                if(st!=-1 && end!=-1){
                    if(end-st==1)
                        ans+=2;
                    else if(end-st==2)
                        ans++;
                }
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}