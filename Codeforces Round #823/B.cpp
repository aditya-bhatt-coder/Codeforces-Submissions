//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

vector<ll> x,t;
int n;

double cost(int x0){
    double mx = 0.0,c;
    for(int i=0 ; i<n ; i++){
        c = abs(x0-x[i])+t[i];
        mx = max(c,mx);
    }
    return mx;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        cin>>n;
        x.resize(n),t.resize(n);
        for(ll &i : x)cin>>i;
        for(ll &i : t)cin>>i;

        double l = 0.0;
        double r = 1e8;

        for(int i=0 ; i<100 ; i++){
            double m1 = (l*2.0 + r)/3.0;
            double m2 = (l + 2.0*r)/3.0;
            double v1 = cost(m1);
            double v2 = cost(m2);
            if(v1>v2)
                l = m1;
            else
                r = m2;
        }

        cout<<setprecision(7)<<fixed<<l<<'\n';

    }

    return 0;
}