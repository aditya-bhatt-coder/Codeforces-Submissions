#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<int> a(n);
        for(int &i : a)
            cin>>i;
        
        long long o=0, e=0;
        for(int i : a){
            if(i%2==0)
                e++;
            else
                o++;
        }
        
        cout<<min(e,o)<<'\n';
    }
 
    return 0;
}