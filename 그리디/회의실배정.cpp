#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector <pair<int, int>> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].second >> arr[i].first;
	}
	int idx = 0;
	int count = 0;
	sort(arr.begin(), arr.end());
	for (int i = 0; i < N; i++)
	{
		if (arr[i].second >= idx)
		{
			idx = arr[i].first;
			count++;
		}
	}
	cout << count;

	return 0;
}