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
        string s; cin>>s;
        int r = s.find('r');
        int g = s.find('g');
        int b = s.find('b');
        int R = s.find('R');
        int G = s.find('G');
        int B = s.find('B');

        if(r<R && g<G && b<B)   cout<<"YES\n";
        else    cout<<"NO\n";
    }

    return 0;
}