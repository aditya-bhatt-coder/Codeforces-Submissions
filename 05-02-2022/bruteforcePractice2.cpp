#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int Ax=0, Ay=0, Bx, By; cin>>Bx>>By;

        if( (Bx+By)%2!=0 )
            cout<<"-1 -1\n";

        else{
            int d_ab = (Bx+By);
            for (int i=0 ; i<=d_ab/2  ; i++){
                int Cx = i, Cy = d_ab/2-i;
                if( abs(Bx-Cx)+abs(By-Cy)==abs(Ax-Cx)+abs(Ay-Cy) ){
                    cout<<Cx<<" "<<Cy<<'\n'; break;
                }
            }
        }
    }

    return 0;
}