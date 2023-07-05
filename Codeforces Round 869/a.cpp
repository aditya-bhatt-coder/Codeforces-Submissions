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

void solve(){
    int n, k;
    cin >> n >> k;

    map<string, int> m;
    int ans = 0;

    string ch, fi; cin >> ch;
    fi = ch;
    m[ch]++;
    ans = max(ans, m[ch]);

    for(int i=0 ; i<n-1 ; i++){
        cin >> ch;
        m[ch]++;
        ans = max(ans, m[ch]);
    }

    cout << m[fi] << "\n";
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