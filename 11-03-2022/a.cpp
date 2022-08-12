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
        int n; cin>>n;
        int q = n/3, r = n%3, sum=0;

        if(n==1)
            cout<<"1";
        else if(n==2)
            cout<<"2";
        else if(r==0){
            for(int i=0 ; i<q ; i++)
                cout<<"21";
        }
        else if(r==2){
            for(int i=0 ; i<q ; i++)
                cout<<"21";
            cout<<"2";
        }
        else if(r==1){
            for(int i=0 ; i<q ; i++)
                cout<<"12";
            cout<<"1";
        }
        cout<<'\n';
    }

    return 0;
}