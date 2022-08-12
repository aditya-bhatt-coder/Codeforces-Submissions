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
        int z,o;
        cin>>z>>o;
        while(z!=0 and o!=0){
            cout<<"10";
            z--;o--;
        }
        while(z!=0){
            cout<<"0";
            z--;
        }
        while(o!=0){
            cout<<"1";
            o--;
        }
        cout<<'\n';
    }

    return 0;
}