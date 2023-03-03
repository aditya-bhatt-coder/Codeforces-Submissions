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
        int n;
        cin >> n;
        string s;
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int i=0;
        vector<bool> b(4,false);

        while(i<n and s[i]=='m'){i++;b[0]=true;}
        while(i<n and s[i]=='e'){i++;b[1]=true;}
        while(i<n and s[i]=='o'){i++;b[2]=true;}
        while(i<n and s[i]=='w'){i++;b[3]=true;}

        // cout<<s;
        if(i==n and b[0] and b[1] and b[2] and b[3])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}