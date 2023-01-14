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
        ll a,b=0,s; cin>>a>>s;
        int p = 0;
        bool ok =true;

        while(a > 0){
            int al = a % 10;
            a /= 10;
            if(s == 0) {ok = false;break;}
            int sl = s % 10;
            if(al <= sl){
                if(sl - al > 9) {ok = false;break;}
                ll t1 = (sl - al);
                ll t2 = round(pow(10,p));
                // cout<<t1<<" "<<t2<<" "<<b<<'\n';
                b = b + t1 * t2;
                p++;
                s /= 10;
                // cout<<b<<'\n';
                // cout<<sl<<" "<<al<<'\n';
            }
            else{
                if(s <= 9) {ok = false;break;}
                sl = s % 100;
                s /= 100;
                if(sl - al > 9) {ok = false;break;}
                b += (sl - al) * round(pow(10,p));
                // cout<<sl<<" "<<al<<'\n';
                // cout<<b<<'\n';
                p++;
            }
        }

        while(s > 0){
            int r = s % 10;
            s /= 10;
            b += r * round(pow(10,p));
            p++;
        }

        // cout<<"s : "<<s<<'\n';

        if(ok){
            cout<<b<<'\n';
        }else{
            cout<<"-1\n";
        }
    }

    return 0;
}