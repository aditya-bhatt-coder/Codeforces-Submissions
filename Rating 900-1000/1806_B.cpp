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
        vector<int> a(n);
        int zero = 0, one = 0, oth = 0;

        for(int &i : a){
            cin >> i;
            if(i == 0)
                zero++;
            else if(i == 1)
                one++;
            else
                oth++;
        }

        if(zero){
            if(n%2 == 0){
                if(zero <= n/2){
                    cout << "0\n";
                }
                else if(oth or zero == n){// 0 1 0 - 1
                    cout << "1\n";
                }
                else{
                    cout << "2\n";
                }
            }
            else{
                if(zero <= n/2 + 1){
                    cout << "0\n";
                }
                else if(oth or zero == n){// 0 1 0 - 1
                    cout << "1\n";
                }
                else{
                    cout << "2\n";
                }
            }
        }
        else{
            cout << "0\n";
        }
    }

    return 0;
}