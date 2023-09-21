// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define inp(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
#define pb push_back
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    string str, tmp;
    cin >> str;
    tmp = str;

    reverse(str.begin(),str.end());
    str += '0';

    for(int i = 0, j = 0 ; i<str.size() - 1 ; i++){
        if(str[i] >= '5'){
            str[i + 1]++;
            for(int k = i ; k>=j ; k--)
                str[k] = '0';
            j = i;
        }
    }
    
    reverse(str.begin(),str.end());

    int idx = 0;
    if(str[0]=='0')
        idx++;
    
    for(int i = idx ; i < str.size() ; i++)
        cout << str[i];

    cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}