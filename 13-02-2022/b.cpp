#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s, t;
        cin>>s>>t;
        sort(s.begin(),s.end());
        if(t=="abc" && s.find('a')!=-1 && s.find('b')!=-1 && s.find('c')!=-1 ){
            int nob=0;
            for(int i=0 ; i<s.length() ; i++)
                if(s[i]=='b')   nob++;
            t = s.substr(0,s.find('b'))+s.substr(s.find('b')+nob, s.length()-1);
            cout<<s<<endl;
            for(int i=0 ; i<nob ; i++)
                t+='b';
            cout<<t<<"IIIFFF\n\n";
        }
        else{
            cout<<s<<"EELLSSEE\n\n";
        }
    }
    return 0;
}