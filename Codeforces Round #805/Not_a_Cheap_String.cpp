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

    int t;
    cin>>t;
    while(t--){
        string s,std,minus="";
        cin>>s;
        std = s;
        sort(std.rbegin(),std.rend());
        int sum = 0,p,itr=0;
        for(auto c : std)
            sum += c;
        cin>>p;
        while(sum>p){
            sum-=std[itr];
            minus+=std[itr];
            itr++;
        }
    }

    return 0;
}