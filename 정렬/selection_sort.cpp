#include <iostream>
using namespace std;

int main()
{
	int min, index, temp = 0;
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (int i = 0; i < 10; i++)
	{
		min = 9999;
		for (int j = i; j < 10; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}