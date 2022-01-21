#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int num = N;
	int count = 0;
	
	while(num >= 0)
	{
		if (num % 5 == 0)
		{
			count += num / 5;
			cout << count;
			return 0;
		}
		num -= 3;
		count++;
	}
	cout << -1;
	return 0;
}