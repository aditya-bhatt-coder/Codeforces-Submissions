#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int &i : a)
            cin>>i;
        bool aq=true;
        int temp = a[0];
        for(int i : a){
            if(i!=temp)
                aq=false;
        }
        if(aq)
            cout<<"YES\n";
        else{
            int d = n-1;
            bool found = false;
            for(int i=0 ; i<n ; i++){
                int sum = 0;
                for(int j=0 ; j<n ; j++){
                    if(i!=j){
                        sum+=a[j];
                    }
                }
                if(float(a[i])==float(sum)/float(d)){
                    found = true;
                    break;
                }
            }
            if(found)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        
    }

    return 0;
}