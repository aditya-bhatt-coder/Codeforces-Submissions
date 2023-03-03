// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testc;
    cin>>testc;

    while(testc--){
        int n; cin>>n;

        ll negval = 0;
        ll summ = 0;
        vector<ll> v(n);

        for(int i=0 ; i<n ; i++){
            cin>>v[i];

            if(v[i] < 0){
                negval++;
                v[i] = -v[i];
            }
        }

        if(negval % 2 == 0){
            vector<ll> newint(n);
            for(int i=0 ; i<n ; ++i)
                summ += v[i];
        }
        else{
            vector<ll> newint(n);
            sort(v.begin(), v.end());
            for(int i=1 ; i<n ; ++i){
                summ = summ + v[i];
            }
            summ = summ - v[0];
        }
        
        cout<<summ<<'\n';
    }

    return 0;
}