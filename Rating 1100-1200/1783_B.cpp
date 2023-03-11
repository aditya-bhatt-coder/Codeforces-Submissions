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
        int n; cin >> n;

        int ctr = 0, l = 1, h = n*n;
        vector<vector<int>> m(n, vector<int>(n));

        for(int i=0 ; i<n ; i++){
            if(i % 2 == 0){
                for(int j=0 ; j<n ; j++){
                    if(ctr % 2 == 0){
                        m[i][j] = l;
                        l++;
                    }
                    else{
                        m[i][j] = h;
                        h--;
                    }
                    ctr++;
                }
            }
            else{
                for(int j=n-1 ; j>=0 ; j--){
                    if(ctr % 2 == 0){
                        m[i][j] = l;
                        l++;
                    }
                    else{
                        m[i][j] = h;
                        h--;
                    }
                    ctr++;
                }
            }
        }

        for(int i=0 ; i<n ; i++)
            print(m[i]);
    }

    return 0;
}