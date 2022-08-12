#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

vector<int> parent;
vector<bool> visited;
vector<vector<int>> Alist;
vector<vector<int>> ans;
queue<int> q;

void dfs(int v,int ctr){
    visited[v] = true;
            // cout<<"HI  ";
    ans[ctr].push_back(v);
    vector<int> temp;
    for(auto nbr : Alist[v])
        if(visited[nbr]==false){
            temp.push_back(nbr);
            // visited[nbr] = true;
        }
    
    if(temp.size()){
        for(int i=1 ; i<temp.size() ; i++)
            q.push(temp[i]);
        dfs(temp[0],ctr);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        //Initialization
        int n, root=-1; cin>>n;
        parent.clear();
        parent.resize(n+1);
        visited.clear();
        visited.resize(n+1,false);
        Alist.clear();
        Alist.resize(n+1,vector<int> ());
        ans.clear();

        //Input and Adj List
        for(int i=1 ; i<=n ; i++){
            int j;
            cin>>j;
            if(i==j)
                root = i;
            else{
                Alist[i].push_back(j);
                Alist[j].push_back(i);
            }
        }

        //DFS procedure and populating ans
        q.push(root);
        int ctr = 0;
        while(q.size()){
            int cur = q.front(); q.pop();
            ans.push_back(vector<int>());
            dfs(cur,ctr);
            ctr++;
        }

        //printing answer
        cout<<ans.size()<<'\n';
        for (int i = 0; i < ans.size(); i++){
            cout<<ans[i].size()<<'\n';
            for (int j = 0; j < ans[i].size(); j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<'\n';
        }
        cout<<'\n';
    }

    return 0;
}