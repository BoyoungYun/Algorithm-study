#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	vector<int> temp{ 1,1,1,1,1,1,1,0,0 };
	vector<int> answer;
	for (int i=0; i<9; i++)
	{
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	do {
		int sum = 0;
		for (int i=0; i<v.size(); i++)
		{
			if (temp[i] == 1)
			{
				sum += v[i];
				answer.push_back(v[i]);
			}
		}
		if (sum == 100)
		{
			for (int i=0; i<answer.size(); i++)
			{
				cout << answer[i] << "\n";
			}
			break;
		}
		else answer.clear();
	} while (prev_permutation(temp.begin(), temp.end()));
	return 0;
}