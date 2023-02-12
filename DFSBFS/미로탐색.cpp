#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isValidCoord(int y, int x);
int bfs(vector<vector<int>> board, int start_y, int start_x);
int dy[4] = { 0, 1, 0, -1 };
int dx[4] = { 1, 0, -1, 0 };
int N, M;

int main()
{
	cin >> N >> M;
	vector<vector<int>> board(N, vector<int> (M));
	for (int i = 0; i < N; i++)
	{
		string a;
		cin >> a;
		for (int j = 0; j < M; j++)
		{
			board[i][j] = a[j] - '0';
		}
	}
	cout << bfs(board, 0, 0);
	return 0;
}
bool isValidCoord(int y, int x)
{
	return 0 <= y && y < N && 0 <= x && x < M;
}
int bfs(vector<vector<int>> board, int y, int x)
{
	vector<vector<bool>> chk(N, vector<bool>(M, false));
	queue<int> q;
	int d = 1;
	q.push(y);
	q.push(x);
	q.push(d);
	int ny, nx, nd;
	while (!q.empty())
	{
		y = q.front();
		q.pop();
		x = q.front();
		q.pop();
		d = q.front();
		q.pop();
		if (y == N - 1 && x == M - 1) return d;
		chk[y][x] = true;
		nd = d + 1;
		for (int i = 0; i < 4; i++)
		{
			ny = y + dy[i];
			nx = x + dx[i];
			if (isValidCoord(ny, nx) && !chk[ny][nx] && board[ny][nx]==1)
			{
				chk[ny][nx] = true;
				q.push(ny);
				q.push(nx);
				q.push(nd);
			}
		}
	}
	
}