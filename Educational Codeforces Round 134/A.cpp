//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        string s1;cin>>s1;
        string s2;cin>>s2;
        set<char> s;
        s.insert(s1[0]);
        s.insert(s1[1]);
        s.insert(s2[0]);
        s.insert(s2[1]);

        if(s.size()==1)
            cout<<"0\n";
        else if(s.size()==2)
            cout<<"1\n";
        else if(s.size()==3)
            cout<<"2\n";
        else
            cout<<"3\n";
    }

    return 0;
}