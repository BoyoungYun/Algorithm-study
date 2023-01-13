#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int N, L;
	int num = 0;
	int cnt = 1;
	cin >> N >> L;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	int start = v[0] - 0.5;
	for (int i = 0; i < v.size(); i++)
	{
		if (start + L < v[i])
		{
			start = v[i] - 0.5;
			cnt++;
		}
	}
	cout << cnt;
}