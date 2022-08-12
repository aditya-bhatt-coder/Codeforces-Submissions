#include <iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--){

        int n, m, r, c, b=0, flag=0;
        cin>>n>>m>>r>>c;

        char box[n][m];

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cin>>box[i][j];
                if(box[i][j]=='B')
                    b++;
            }
        }

        if(box[r-1][c-1]=='B')
            cout<<0<<endl;
        else if(b==0)
            cout<<-1<<endl;
        else{
            for(int i=0 ; i<n ; i++)
                if(box[i][c-1]=='B')
                    flag=1;
            for(int i=0 ; i<m ; i++){
                if(box[r-1][i]=='B')
                    flag=1;
            }
            if(flag==1)
                cout<<1<<endl;
            else cout<<2<<endl;
        }

    }
    return 0;
}
