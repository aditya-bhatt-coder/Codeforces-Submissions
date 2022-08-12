#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){

        int n, found=false;
        cin>>n;

        if(n%7==0)
            cout<<n<<'\n';

        else{
            int u = n%10, temp=n;
            while(u<9){
                temp++;u++;
                if(temp%7==0){
                    cout<<temp<<'\n'; found = true;
                    break;
                }
            }
            if(found==false){
                int u = n%10, temp=n;
                while(u>0){
                    temp--;u--;
                    if(temp%7==0){
                        cout<<temp<<'\n'; found = true;
                        break;
                    }
                }
            }
        }

    }

    return 0;
}