#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool sol(){
        string s; cin>>s;
        if(s.length()==1)
            return false;
        int st=1;
        for(int i=1 ; i<s.length() ; i++){
            if(s[i-1]!=s[i]){
                if(st==1)
                    return false;
                else
                    st=1;
            } else st++;
        }
        if(st==1)
            return false;
        return true;
        
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        if(sol())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}