#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;

        if(s.length()==1)   cout<<0<<'\n';
        else if(s.length()==2)  cout<<0<<'\n';
        else{
            int z=0,o=0;
            for(int i=0 ; i<s.length() ; i++){
                if(s[i]=='0')
                    z++;
                else
                    o++;
            }
            if(z<o)
                cout<<z<<'\n';
            else if(z>o)
                cout<<o<<'\n';
            else{
                cout<<s.length()/2-1<<'\n';
            }
        }

    }

    return 0;
}