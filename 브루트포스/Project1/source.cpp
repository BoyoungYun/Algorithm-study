#include <iostream>
#include <cmath>
using namespace std;

int* combination(int* card, bool* select, int idx, int cnt, int N, int* sumOf);
int sum(int* card, bool* select, int N);
int main()
{
	int N, M;
	int max = 0;
	cin >> N >> M;
	int fac = tgamma(N + 1) / (tgamma(3 + 1) * tgamma((N - 3) + 1));
	int* sumOf = new int[fac];
	int* card = new int[N];
	bool* select = new bool[N];
	for (int i = 0; i < N; i++)
	{
		cin >> card[i];
	}
	for (int i = 0; i < N; i++)
	{
		select[i] = false;
	}
	sumOf = combination(card, select, 0, 0, N, sumOf);
	for (int i = 0; i < fac; i++)
	{
		if (sumOf[i] > M)
		{
			continue;
		}
		if (sumOf[i] > max)
		{
			max = sumOf[i];
		}
	}
	cout << max;

	return 0;
}
int i = 0;
int* combination(int* card, bool* select, int idx, int cnt, int N, int* sumOf)
{
	if (cnt == 3)
	{
		sumOf[i] = sum(card, select, N);
		i++;
	}
	else
	{
		for (int i = idx; i < N; i++)
		{
			if (select[i] == true)
			{
				continue;
			}
			select[i] = true;
			combination(card, select, i, cnt + 1, N, sumOf);
			select[i] = false;
		}
	}
	return sumOf;
}
int sum(int* card, bool* select, int N)
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		if (select[i] == true)
		{
			sum += card[i];
		}
	}
	return sum;
}