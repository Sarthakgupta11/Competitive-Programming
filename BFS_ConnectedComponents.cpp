#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define forr(i, n) for (ll i = 0; i < n; i++)
//use /n instead of endl if tle for big inputs

// } Driver Code Ends

class Solution
{
public:
	vector<int> bfsOfGraph(int V, vector<int> adj[])
	{
		vector<int> bfs;
		vector<int> vis(V + 1, 0);

		for (ll i = 1; i < V; i++)
		{
			if (!vis[i])
			{
				queue<int> q;
				q.push(i);
				vis[i] = 1;
				while (!q.empty())
				{
					int node = q.front();
					q.pop();
					bfs.push_back(node);

					for (auto it : adj[node])
					{
						if (!vis[it])
						{
							q.push(it);
							vis[it] = 1;
						}
					}
				}
			}
		}

		return bfs;
	}
};

// { Driver Code Starts.
int main()
{
	int tc = 1;
	//cin >> tc;
	// for multiple graphs
	while (tc--)
	{
		int V, E;
		cin >> V >> E;

		vector<int> adj[V + 1];

		for (int i = 0; i < E; i++)
		{
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u); // uncomment this for undirected graoh
		}
		// string s1;
		// cin>>s1;
		Solution obj;
		vector<int> ans = obj.bfsOfGraph(V + 1, adj);
		for (int i = 0; i < ans.size(); i++)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
} // } Driver Code Ends
