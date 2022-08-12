#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll sum=0,lastval,tmp,n,q;
    cin>>n>>q;
    map<int,int> m;
    for(int i=0 ; i<n ; i++){
        cin>>tmp;
        m[i] = tmp;
        sum += tmp;
    }
    
    while(q--){
        short type; cin>>type;
        if(type==1){
            int i, x; cin>>i>>x;i--;
            if(m.find(i)==m.end())
                sum += x-lastval;
            else
                sum += x-m[i];
            m[i] = x;
        } else{
            int x; cin>>x;
            sum = n*x;
            m.clear();
            lastval = x;
        }
        cout<<sum<<'\n';
    }

    return 0;
}