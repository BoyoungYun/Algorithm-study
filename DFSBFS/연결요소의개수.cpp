#include <iostream>
#include <vector>
using namespace std;

int N, M;
void dfs(vector<vector<int>> *adj, vector<bool> *chk, int now);
int main()
{
	cin >> N >> M;
	vector<vector<int>> adj(N, vector<int>(N, 0));
	vector<bool> chk(N, false);
	int answer = 0;
	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u - 1][v - 1] = 1;
		adj[v - 1][u - 1] = 1;
	}
	for (int i = 0; i < N; i++)
	{
		if (!chk[i])
		{
			answer++;
			chk[i] = true;
			dfs(&adj, &chk, i);
		}
	}
	cout << answer;
	
	return 0;
}
void dfs(vector<vector<int>> *adj, vector<bool> *chk, int now)
{
	for (int i = 0; i < N; i++)
	{
		if ((*adj)[now][i] && !(*chk)[i])
		{
			(*chk)[i] = true;
			dfs(adj, chk, i);
		}
	}
}