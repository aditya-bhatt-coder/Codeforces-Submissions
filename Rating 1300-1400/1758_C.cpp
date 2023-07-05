// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

void solve(){
    int n, x; cin >> n >> x;
    if(n % x != 0){
        cout << "-1\n";
        return;
    }

    vector<int> ans(n);
    iota(ans.begin(), ans.end(), 1);
    ans[x - 1] = n;
    ans[0] = x;
    ans[n - 1] = 1;

    for(int i = 2 ; i < n ; i++){
        if(i == x){
            int multiple = x * 2;
            while(n % multiple != 0 and multiple < n){
                multiple += x;
            }

            if(n % multiple == 0 and multiple < n){
                swap(ans[i - 1], ans[multiple - 1]);
                x = multiple;
            }
        }
    }

    print(ans);
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