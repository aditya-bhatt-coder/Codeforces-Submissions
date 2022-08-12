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
        string s;
        cin>>s; bool found=true;
        
        do{
            found=false;
            for(int i=1 ; i<s.length() ; i++){
                if(s[0]==s[i]){
                    found=true;
                    s=s.substr(1);
                    break;
                }
            }
        }while(found);
        cout<<s<<'\n';
    }

    return 0;
}