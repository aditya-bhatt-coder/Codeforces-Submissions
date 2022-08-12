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
        int n,c=0,r=0; cin>>n;
        string s; cin>>s;

        for(int i=0; i<n;){
            if(s[i]=='('){
                if(i==n-1){
                    r=1;i++;
                } else{
                    c++; i+=2;
                }
            }
            else{
                if(i==n-1){
                    r=1;i++;
                } else{
                    bool found=false;
                    for(int j=i+1; j<n; j++)
                        if(s[j]==')'){
                            c++; i=j+1;
                            found=true;
                            break;
                        }
                    if(!found){
                        r=n-i; i=n;
                    }
                }
            }
        }

        cout<<c<<" "<<r<<"\n";
    }

    return 0;
}