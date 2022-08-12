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
        string s; char c; vector<int> v; bool found=false;
        cin>>s>>c;
        
        for(int i=0 ; i<s.length() ; i++)
            if(s[i]==c)
                v.push_back(i);

        for(int i=0 ; i<v.size() ; i++)
            if(v[i]%2==0){
                found = true;
                break;
            }
        if(found)   cout<<"YES\n";
        else    cout<<"NO\n";
    }

    return 0;
}