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

        //first array
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        //second array
        int m; cin>>m;
        vector<int> b(m);
        for(int i=0 ; i<m ; i++)
            cin>>b[i];
        
        int a_max = *max_element(a.begin(),a.end());
        int b_max = *max_element(b.begin(),b.end());

        if(a_max>b_max){
            cout<<"Alice\n";
            cout<<"Alice\n";
        } else if(a_max<b_max){
            cout<<"Bob\n";
            cout<<"Bob\n";
        } else{
            cout<<"Alice\n";
            cout<<"Bob\n";
        }
    }

    return 0;
}