#include <bits/stdc++.h>
#define BIT(x, k) ((x >> k) & 1)
#define on(x, k) (x ^ (1 << k))
using namespace std;

int n;
int a[200005], f[200005], g[200005], vt[200005], pre[200005];

void process()
{
    cin >> n;
    for(int i = 1; i <= n; i++) vt[i] = f[i] = g[i] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = vt[a[i]];
        vt[a[i]] = i;
    }
    f[1] = 1, g[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        if(pre[i] == 0)
        {
            f[i] = min(f[i - 1] + 1, g[i - 1] + 1);
            continue;
        }
        f[i] = min(f[i - 1] + 1, g[i - 1] + 1);
        g[i] = min(f[pre[i] - 1], g[pre[i] - 1]);
    }
    cout << n - min(f[n], g[n]) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) process();
}
