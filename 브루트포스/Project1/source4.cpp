#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int M = 0;
	int count = 0;
	while (1)
	{
		string stM = to_string(M);
		if (stM.find("666") != -1)
		{
			count++;
		}
		if (count == N)
		{
			cout << M;
			break;
		}
		M++;
	}
	return 0;
}