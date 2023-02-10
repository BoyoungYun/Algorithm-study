#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> dx = { 1, -1, 2 };
int BFS(int x);
int N, K;
int main()
{
	cin >> N >> K;

	if (N == K) cout << 0;
	else
	{
		if (N > K)
		{
			int temp = K;
			K = N;
			N = temp;
			dx.pop_back();
		}
		cout << BFS(N);
	}
	return 0;
}
int BFS(int x)
{
	vector<bool> chk(100001, false);
	queue<int> q;
	int nx, nd;
	int d = 0;
	q.push(x);
	q.push(d);
	chk[x] = true;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		d = q.front();
		q.pop();
		if (x == K) return d;
		nd = d + 1;
		for (int i = 0; i < dx.size(); i++)
		{
			if (i == 2) nx = x * dx[i];
			else nx = x + dx[i];
			if (nx <= 100000 && nx >= 0 && !chk[nx])
			{
				chk[nx] = true;
				q.push(nx);
				q.push(nd);
			}
		}
	}
}