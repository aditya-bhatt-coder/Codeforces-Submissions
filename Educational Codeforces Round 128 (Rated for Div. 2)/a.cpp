#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int l1, r1, l2, r2;
	    cin >> l1 >> r1 >> l2 >> r2;
	    if(max(l1, l2) <= min(r1, r2)){
		    cout << (max(l1, l2)) << '\n';
	    }else {
		    cout << (l1 + l2) << '\n';
	    }
    }

    return 0;
}