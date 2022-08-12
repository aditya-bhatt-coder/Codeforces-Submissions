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
        string s; cin>>s;
        int n = s.length();
        if(n==1 || s[n-1]!='B'){
            cout<<"NO\n";
            continue;
        }
        int buff = 0;
        bool flag=true;
        for(int i=0 ; i<n ; i++){
            if(s[i]=='A')
                buff++;
            else{
                if(buff==0){
                    flag=false;
                    break;
                }
                else
                    buff--;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}