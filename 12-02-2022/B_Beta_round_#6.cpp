#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m; char c; set<char> s; string str;
    cin>>n>>m>>c; int a[n][m];
    for(int i=0 ; i<n ; i++){
        cin>>str;
        for(int j=0 ; j<m ; j++)
            a[i][j]=str[j];
    }

    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<m ; j++)
            if(a[i][j]==c){
                if(i-1>-1)
                    if(a[i-1][j]!='.' && a[i-1][j]!=c)
                        s.insert(a[i-1][j]);
                if(i+1<n)
                    if(a[i+1][j]!='.' && a[i+1][j]!=c)
                        s.insert(a[i+1][j]);
                if(j-1>-1)
                    if(a[i][j-1]!='.' && a[i][j-1]!=c)
                        s.insert(a[i][j-1]);
                if(j+1<m)
                    if(a[i][j+1]!='.' && a[i][j+1]!=c)
                        s.insert(a[i][j+1]);
            }
    cout<<s.size();

    return 0;
}