//binary search
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int l=1, r=1000000;
    
    while(l<r){
        int mid = (l+r+1)/2;
        string s;

        cout<<mid<<endl;
        cin>>s;

        if(s=="<")
            r=mid-1;

        else if(s==">=")
            l=mid;
    }

    cout<<"! "<<l;
    fflush(stdout);

    return 0;
}