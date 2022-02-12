#include <iostream>
using namespace std;

int main()
{
	int temp = 0;
	int arr[10] = { 10,1,5,8,7,6,4,3,2,9 };

	for (int i = 0; i < 9; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			while (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}