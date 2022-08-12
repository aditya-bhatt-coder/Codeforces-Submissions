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

        string s;
        cin>>s;
        int l=0,u=0;
        for(auto x : s){
            if(islower(x))
                l++;
            else
                u++;
        }
        // cout<<l<<" "<<u<<'\n';
        if(u>l){
            transform(s.begin(),s.end(),s.begin(),::toupper);
            cout<<s;
        }else{
            transform(s.begin(),s.end(),s.begin(),::tolower);
            cout<<s;
        }

    return 0;
}