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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> u(26), l(26);

        for(int i=0 ; i<n ; i++){
            if(isupper(s[i]))
                u[s[i] - 'A']++;
            else
                l[s[i] - 'a']++;
        }

        int ready = 0;
        int reserve = 0;

        for(int i=0 ; i<26 ; i++){
            ready += min(l[i], u[i]);
            reserve = abs(l[i] - u[i])/2;
            int temp = min(k,reserve);
            k-=temp;
            ready += temp;
            // cout<<i<<" "<<ready<<'\n';
        }

        cout<<ready<<'\n';
    }

    return 0;
}