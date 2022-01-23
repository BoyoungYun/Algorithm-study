#include <iostream>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	int* coin = new int[N];
	int sum = 0;
	int idx = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> coin[i];
	}
	for (int i = N - 1; i >= 0; i--)
	{
		if (coin[i] <= K)
		{
			idx = i;
			break;
		}
	}
	for (int i = idx; i >= 0; i--)
	{
		sum += K / coin[i];
		K %= coin[i];
	}
	cout << sum;
	return 0;
}