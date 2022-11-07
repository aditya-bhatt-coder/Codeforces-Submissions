//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
    
    int n,k,r,c;
    cin>>n>>k>>r>>c;r--;c--;
    
    vector<vector<char>> t(k,vector<char>(k,'.'));
    
    for(int i=0 ; i<n ; i+=k){//row
            for(int j=0 ; j<n ; j+=k){//col
                
                if(i<=r and r<i+k and j<=c and c<j+k){
                    int a=i, b=j;
                    int rt=0,ct=0;
                    for(int itr=0 ; itr<k-1 ; itr++){
                        if(a==r){a++;rt++;}
                        if(b==c){b++;ct++;}
                        
                        t[rt][ct] = 'X';
                        
                        a++;b++;rt++;ct++;
                    }
                    a=i, b=j;
                    rt=0,ct=0;
                    while(a!=r){a++;rt++;}
                    while(b!=c){b++;ct++;}
                    t[rt][ct] = 'X';
                }
            }
        }

    int q = n/k;
    for(int idk=0 ; idk<q ; idk++){
        for(int i=0 ; i<t.size() ; i++){
            for(int p=0 ; p<q ; p++){
                for(auto it : t[i])cout<<it;
            }cout<<'\n';
        }
    }
    
    }

    return 0;
}