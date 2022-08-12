#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){

        int n, max_a=INT_MIN, max_b=INT_MIN;
        cin>>n;
        vector<int> a;
        vector<int> b;

        for(int i=0 ; i<n ; i++){
            int lol;
            cin>>lol;
            a.push_back(lol);
        }

        for(int i=0 ; i<n ; i++){
            int lol;
            cin>>lol;
            b.push_back(lol);

            if(a[i]<b[i]){
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }

        cout<<*max_element(a.begin(),a.end())*(*max_element(b.begin(),b.end()))<<'\n';

    }

    return 0;
}