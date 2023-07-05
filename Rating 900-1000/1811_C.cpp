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
        vector<int> a(n-1), ans;

        for(int &i : a)
            cin >> i;

        for(int i=0 ; i<n-1 ; i++){
            if(i == n - 2){
                ans.push_back(0);
                ans.push_back(a[n - 2]);
            }
            else if(a[i] > a[i+1]){
                ans.push_back(a[i]);
            }
            else if(a[i] == a[i+1]){
                ans.push_back(0);
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(0);
                int j = i;
                for(j=i ; j<n - 1 ; j++){
                    ans.push_back(a[j]);
                    if(j+1 < n - 1 and a[j] >= a[j + 1]){
                        break;
                    }
                }
                // i = --j;
                i = j+1;
            }
        }

        if(ans.size() != n){
            ans.push_back(a[n - 2]);
        }

        print(ans);
    }

    return 0;
}