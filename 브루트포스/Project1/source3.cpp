#include <iostream>
using namespace std;
int** counter(int** arr, int N);

int main()
{
	int N;
	cin >> N;
	int** arr = new int* [N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[3];
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
		arr[i][2] = 1;
	}
	arr = counter(arr, N);
	for (int i = 0; i < N; i++)
	{
		cout << arr[i][2] << " ";
	}
	for (int i = 0; i < N; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}
int** counter(int** arr, int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
			{
				arr[i][2]++;
			}
			else if (arr[j][0] < arr[i][0] && arr[j][1] < arr[i][1])
			{
				arr[j][2]++;
			}
		}
	}
	return arr;
}