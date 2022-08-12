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
        int n, big=INT_MIN; cin>>n;
        int temp; ll sum=0;
        for(int i=0 ; i<n ; i++){
            cin>>temp;
            sum += temp;
            big = max(temp,big);
        }
        sum -= big;
        if(big==0)
            cout<<"0\n";
        else if(sum>=big)
            cout<<"1\n";
        else 
            cout<<big-sum<<'\n';
        // cout<<"Sum "<<sum<<"\nBig "<<big<<'\n';
    }

    return 0;
}