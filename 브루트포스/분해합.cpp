#include <iostream>
#include <cmath>
using namespace std;

int sum(int num,int N);
int result[6];
int main()
{
	int N;
	cin >> N;
	int sumOf = 0;
	for (int i = 1; i < N; i++)
	{
		sumOf = sum(i,N);
		if (sumOf == N)
		{
			cout << i;
			return 0;
		}
	}
	cout << 0;
}
int sum(int num, int N)
{
	int a = num;
	for (int i = 5; i >= 0; i--)
	{
		int m = pow(10, i);
		result[i] = num / m;
		num %= m;
	}
	for (int i = 5; i >= 0; i--)
	{
		a += result[i];
	}
	return a;
}