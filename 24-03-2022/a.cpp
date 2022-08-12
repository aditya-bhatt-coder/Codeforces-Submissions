#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,small=INT_MAX,big=INT_MIN; cin>>n;
        vector<int> a(n);
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
            small = min(a[i],small);
            big = max(big,a[i]);
        }
        if(n==1)
            cout<<"1 1\n";
        else{
            int b,s;
            for(int i=0 ; i<n ; i++){
                if(big==a[i])
                    b=i;
                if(small==a[i])
                    s=i;
            }
            cout<<b+1<<" "<<s+1<<"\n";
        }
    }

    return 0;
}