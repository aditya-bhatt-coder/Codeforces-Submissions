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
        int n; cin>>n;
        
        string a,b;
        cin>>a>>b;

        int c = 0, za = 0;

        for(int i=0 ; i<n ; i++){
            if(a[i] == b[i]){
                c++;
            }
        }

        // op on zero

        if(c == 0){ // oppo
            cout<<"YES\n";

            vector<vector<int>> v; 
            for(int i=0 ; i<n ; i++){
                if(a[i] == '0'){
                    v.push_back({i+1,i+1});
                }
            }
            if(v.size()%2==0){ //even -> oppo (1,0)
                v.push_back({1,n});
            }
            else{ // odd -> eq (1,1)
                v.push_back({1,1});
                v.push_back({2,n});
            }

            cout<<v.size()<<'\n';
            for(int i=0 ; i<v.size() ; i++){
                cout<<v[i][0]<<" "<<v[i][1]<<'\n';
            }
        }
        else if(c == n){ //equal
            cout<<"YES\n";
            // even -> equal

            // odd -> oppo
            vector<vector<int>> v; 
            for(int i=0 ; i<n ; i++){
                if(a[i] == '0'){
                    v.push_back({i+1,i+1});
                }
            }
            if(v.size()%2==0){ //even -> equal (1,1)
                v.push_back({1,1});
                v.push_back({2,n});
            }
            else{ // odd -> oppo (1,0)
                v.push_back({1,n});
            }

            cout<<v.size()<<'\n';
            for(int i=0 ; i<v.size() ; i++){
                cout<<v[i][0]<<" "<<v[i][1]<<'\n';
            }
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}