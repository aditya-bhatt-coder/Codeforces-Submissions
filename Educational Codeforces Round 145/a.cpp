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
        // 0 0 0 0
        // 1 0 0 0 // 1 1 0 0 // 
        // 
        string str;
        cin >> str;
        map<char, int> m;
        int mf = 0;

        for(auto c : str){
            m[c]++;
            mf = max(m[c], mf);
        }

        if(m.size() == 1){
            cout << "-1\n";
            continue;
        }

        if(m.size() == 2 and mf == 3){
            cout << "6\n";
            continue;
        }

        cout << "4\n";

    }

    return 0;
}