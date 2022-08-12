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
        int n;
        cin>>n;
        int a = n/3;
        int b = n/3;
        int c = n/3;
        int r = n%3;
        if(r==2){
            a++;
            b+=2;
            c--;
        }
        else if(r==0){
            c--;
            b++;
        } else{
            b++;
            c--;
            b++;
        }
        cout<<a<<" "<<b<<" "<<c<<'\n';
    }

    return 0;
}