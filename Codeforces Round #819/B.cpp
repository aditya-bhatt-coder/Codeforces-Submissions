//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void print(vector<int> &v){
    for(int i=0 ; i<v.size() ; i++)
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
        int n,s; cin>>n>>s;
        if(n>s){
            cout<<"NO\n";
            continue;
        }
        if(n==1){
            cout<<"Yes\n";
            cout<<s<<'\n';
            continue;
        }
        if(n%2==0){
            if(s%2!=0){
                cout<<"NO\n";
                continue;
            }
            vector<int> v(n,1);
            v[n-1] = v[n-2] = (s-n+2)/2;
            cout<<"Yes\n"; print(v);
        }
        else{
            vector<int> v(n,1);
            v[n-1] = s-n+1;
            cout<<"Yes\n"; print(v);
        }

    }

    return 0;
}