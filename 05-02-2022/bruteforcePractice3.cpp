#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        bool ans = false;

        for (int i=1; i<=n-1 ; i++){
            for(int j=1 ; j<=n-i-1 ; j++){
                int c = n-(i+j);
                if( (__gcd(i,j)==c || __gcd(i,c)==j || __gcd(c,j)==i) && (i!=j&&j!=c&&i!=c) ){
                    if(__gcd(i,j)==c){
                        cout<<i<<" "<<j<<" "<<c<<'\n';
                        ans = true; break;
                    }
                    else if(__gcd(i,c)==j){
                        cout<<i<<" "<<c<<" "<<j<<'\n';
                        ans = true; break;
                    }
                    else if(__gcd(c,j)==i){
                        cout<<c<<" "<<j<<" "<<i<<'\n';
                        ans = true; break;
                    }
                }
            }
            if(ans) break;
        }
    }

    return 0;
}