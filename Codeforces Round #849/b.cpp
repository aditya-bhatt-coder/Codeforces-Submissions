// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int x=0, y=0;
        int n; cin>>n;
        string s; cin>>s;
        bool ans = false;

        for(int i=0 ; i<n ; i++){
            if(s[i] == 'U')
                y++;
            if(s[i] == 'D')
                y--;
            if(s[i] == 'L')
                x--;
            if(s[i] == 'R')
                x++;
            if(x == 1 and y ==1)
                ans = true;
        }

        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}