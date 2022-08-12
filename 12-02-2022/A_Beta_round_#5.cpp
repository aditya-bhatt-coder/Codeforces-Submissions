#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    ll p=0, ans=0;
    string s;
    while(true){
        getline(cin, s);
        if(s.empty())
            break;
        else if(s[0]=='+')
            p++;
        else if(s[0]=='-')
            p--;
        else{
            ll ind = s.find(':');
            ll len = s.length()-1-ind;
            ans = ans+(p*len);
        }
    }
    cout<<ans;

    return 0;
}