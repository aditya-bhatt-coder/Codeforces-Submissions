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
    int n, op; cin >> n;
    vector<string> a(2);
    cin >> a[0] >> a[1];

    bool ok1 = true, ok2 = true;
    
    op = 0;
    for(int i=0 ; i<n ; i++){
        if(a[op][i] == 'B'){
            if(a[(op + 1) % 2][i] == 'B'){
                op = (op + 1) % 2;
            }
        }
        else{
            ok1 = false;
            break;
        }
    }
    op = 1;
    for(int i=0 ; i<n ; i++){
        if(a[op][i] == 'B'){
            if(a[(op + 1) % 2][i] == 'B'){
                op = (op + 1) % 2;
            }
        }
        else{
            ok2 = false;
            break;
        }
    }

    if(ok1 or ok2){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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