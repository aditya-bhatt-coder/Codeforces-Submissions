// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

//--debug--
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
        int n,m,k;
        cin>>n>>m>>k;

        vector<int> a(k);
        vector<bool> w(k);
        int occ = 0;
        bool f = true;

        // 0 : no work done
        // 1 : moved to board

        for(int i=0 ; i<k ; i++){
            cin>>a[i];
            a[i] = k - a[i];
        }

        for(int i=0, j=0 ; i<a.size() ; i++){
            while(!w[i]){
                w[a[j++]] = true;
                occ++;
            }
            if(occ>n*m-3){
                f = false;
                break;
            }
            w[i] = false;
            occ--;
        }

        if(f)
            cout<<"YA\n";
        else
            cout<<"TIDAK\n";
    }

    return 0;
}