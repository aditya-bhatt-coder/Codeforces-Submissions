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
        ll n = s.length();
        
        set<char> set;
        for(char x : s)
            set.insert(x);
        
        bool f = true;
        for(int i=0 ; i<n ; i++){
            if(s[i]!=s[i%set.size()]){
                f=false;
                break;
            }
        }
        f?cout<<"YES\n":cout<<"NO\n";

    }

    return 0;
}