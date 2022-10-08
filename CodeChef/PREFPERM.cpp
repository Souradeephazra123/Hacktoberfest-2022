//Problem Code:PREFPERM

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int t;
	vector<vector<int>> vv;
	cin >> t;
	int kz = 0;
	while (t)
	{
		int n, k;
		vector<int> v;
		cin >> n >> k;
		for (int i = 0; i < k; i++)
		{
			int input;
			cin >> input;
			v.push_back(input);
		}
		sort(v.begin(), v.end());
		vv.push_back(vector<int>());
		int p = 0;
		for (int i = 0; i < v.size(); i++)
		{
			for (int l = v[i]; l > p; l--)
			{
				vv[kz].push_back(l);
			}
			p = v[i];
		}
		kz++;
		t--;
	}
	for (int i = 0; i < vv.size(); i++)
	{
		for (int j = 0; j < vv[i].size(); j++)
		{
			cout << vv[i][j] << " ";
		}
		cout << endl;
	}
}
