// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        ll n;
		cin >> n;
		vector<ll>a(n + 5);
		ll sum = 0;
		for (int i = 1; i <= n; i++)
		{
			ll tmp;
			cin >> tmp;
			a[i] = tmp;
 
			while (tmp % 2 == 0)
				sum++, tmp /= 2;
		}
		if (sum >= n)
		{
			cout << 0 << "\n";
		}
		else
		{
			ll flag = 0;
			ll ans = 0;
			vector<ll>v;
			for (int i = n; i >= 1; i--)
			{
				ll tmp = i, sum1 = 0;
				while (tmp % 2 == 0)
					tmp /= 2, sum1++;
				if (sum1)
					v.push_back(sum1);
			}
			sort(v.begin(), v.end());
			while (v.size() && sum < n)
				sum += v.back(), v.pop_back(), ans++;
			if (sum >= n)
				flag = 1;
 
			if (flag)
				cout << ans << "\n";
			else
				cout << -1 << "\n";
		}
    }

    return 0;
}