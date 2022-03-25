#include <iostream>
#include <vector>
using namespace std;

int N = 0, S = 0, sum = 0, K = 0, answer = 0;
void sumOf(int sum, int K, vector<int> a);
int main()
{
	cin >> N >> S;
	vector<int> a(N);
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	sumOf(sum, K, a);
	if (S == 0)
	{
		answer--;
	}
	cout << answer;
	return 0;
}
void sumOf(int sum, int K, vector<int> a)
{
	if (K == N)
	{
		if (sum == S)
		{
			answer++;
		}
		return;
	}
	sumOf(sum, K + 1, a);
	sumOf(sum + a[K], K + 1, a);
}