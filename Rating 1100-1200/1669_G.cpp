// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i];
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
        int n,m; cin>>n>>m;
        
        vector<vector<char>> g;

        for(int i=0 ; i<n ; i++){
            string s; cin>>s;
            vector<char> t;
            for(int j=0 ; j<m ; j++){
                t.push_back(s[j]);
            }
            g.push_back(t);
        }

        for(int j=0 ; j<m ; j++){
            int s = 0;
            for(int i=0 ; i<n ; i++){
                if(g[i][j] == '*'){
                    s++;
                    g[i][j] = '.';
                }
                if(g[i][j] == 'o'){
                    for(int k = 1 ; k<=s ; k++){
                        g[i-k][j] = '*';
                    }
                    s = 0;
                }
                if(i == n-1){
                    if(g[i][j] == 'o'){
                        for(int k = 1 ; k<=s ; k++){
                            g[i-k][j] = '*';
                        }
                    }
                    else{
                        for(int k = 0 ; k < s ; k++){
                            g[i-k][j] = '*';
                        }
                    }
                }
                else
                    continue;
            }
        }

        for(int i=0 ; i<n ; i++)
            print(g[i]);

    }

    return 0;
}