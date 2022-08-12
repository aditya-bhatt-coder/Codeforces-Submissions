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
        int n, ans=0; cin>>n; vector<int> v(n);
        for(int i=0 ; i<n ; i++)
            cin>>v[i];
        
        int i=0, j=n-1;
        while(i<n){
            if(v[i]==0)
                break;
            i++;
        }
 
        while(j>=0){
            if(v[j]==0)
                break;
            j--;
        }
 
        if(j<i)
            cout<<"0\n";
        else
            cout<<(j-i+2)<<'\n';
    }

    return 0;
}