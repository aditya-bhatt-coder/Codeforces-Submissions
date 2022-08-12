#include <bits/stdc++.h>
using namespace std;

void sol(){
    
        int l, r, k;
        cin>>l>>r>>k;

        if(l==r){
            if(l==1){
                cout<<"NO";
                return;
            }
            else{
                cout<<"YES";
                return;
            }
        }

        else{
            int n = r-l+1, odd;

            if(n%2==0)  odd = n/2;
            else{
                if(l%2!=0)  odd = n/2 +1;
                else    odd = n/2;

                if(odd<=k){
                    cout<<"YES";
                    return;
                }
                else    cout<<"NO";
            }
        }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){sol();cout<<'\n';}
    return 0;
}