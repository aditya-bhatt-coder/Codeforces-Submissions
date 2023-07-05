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
    int n; cin >> n;
    vector<int> a(n), b(n), t1(n), t2(n);
    map<int,int> m;

    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        b[i] = a[i];
        t1[i] = a[i];
        t2[i] = a[i];
        m[a[i]]++;
    }

    sort(b.begin(), b.end());
    int mex = 0;

    for(int i=0 ; i<n ; i++){
        if(b[i] == mex)
            mex++;
    }

    map<int,int> m1 = m;
    for(int i=0 ; i<n ; i++){
        if(t1[i] == mex + 1){
            for(int j=i ; j<n ; j++){
                if(t1[j] > mex or m1[t1[j]] > 1){
                    m1[t1[j]]--;
                    t1[j] = mex;
                }else{
                    break;
                }
            }
            break;
        }
    }

    map<int,int> m2 = m;
    for(int i=0 ; i<n ; i++){
        if(t2[i] > mex or m2[t2[i]] > 1){
            for(int j=i ; j<n ; j++){
                if(t2[j] > mex or m2[t2[j]] > 1){
                    m2[t2[j]]--;
                    t2[j] = mex;
                }else{
                    break;
                }
            }
            break;
        }
    }

    // print(t1);
    // print(t2);

    sort(t1.begin(), t1.end());
    int mex1 = 0;

    for(int i=0 ; i<n ; i++){
        if(t1[i] == mex1)
            mex1++;
    }

    sort(t2.begin(), t2.end());
    int mex2 = 0;

    for(int i=0 ; i<n ; i++){
        if(t2[i] == mex2)
            mex2++;
    }

    mex + 1 == mex1 or mex + 1 == mex2  ? cout << "YES\n" : cout << "NO\n";
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