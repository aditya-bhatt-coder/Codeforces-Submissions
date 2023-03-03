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

bool isAnagram(string &s, string &t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n, k;
        cin >> n >> k;
        string s, t; cin >> s >> t;
        bool ok = true;

        for(int i=0 ; i<n ; i++){
            if(i-k >= 0 or i+k < n)
                continue;
            else if(s[i] == t[i])
                continue;
            else{
                ok = false;
                break;
            }
        }

        if(ok and isAnagram(s, t))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}