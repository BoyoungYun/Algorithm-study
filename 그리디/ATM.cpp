#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int* arr = new int[N];
	int min = 0;
	int idx = 0;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < N; i++)
	{
		min = arr[i - 1];
		for (int j = i; j < N; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				idx = j;
			}
			if (idx != NULL && j == N - 1)
			{
				arr[idx] = arr[i - 1];
				arr[i - 1] = min;
			}
		}
		idx = NULL;
	}
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = i; j >= 0; j--)
		{
			sum += arr[j];
		}
	}
	cout << sum;
	return 0;
}