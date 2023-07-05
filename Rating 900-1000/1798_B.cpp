// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=v.size() - 1 ; i>=0 ; i--)
        cout<<v[i]<<" ";
    cout<<'\n';
}

void solve(){
    int m; cin >> m;
    set<int> s;
    vector<vector<int>> v;
    vector<int> res;

    for(int i=0 ; i<m ; i++){
        int n; cin >> n;
        vector<int> t(n);
        for(int &i : t)
            cin >> i;
        v.push_back(t);
    }


    for(int i=m-1 ; i>=0 ; i--){
        int ans = -1;

        for(int val : v[i]){
            if(s.find(val) == s.end()){
                ans = val;
                s.insert(val);
            }
        }


        if(ans == -1){
            cout << "-1\n";
            return;
        }
        else{
            res.push_back(ans);
        }
    }

    print(res);
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