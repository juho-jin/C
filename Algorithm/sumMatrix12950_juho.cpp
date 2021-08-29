#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer;
	vector<int> numarr;

	int n = arr1[0].size();
	int m = arr1.size();
	int num = 0;

	if (n != arr2[0].size() or m != arr2.size())
	{
		cout << "Error!";
		return answer;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			num = arr1[i][j] + arr2[i][j];
			numarr.push_back(num);
		}
		answer.push_back(numarr);
		numarr.clear();
	}

	cout << "[";
	for (int a = 0; a < m; a++)
	{
		cout << "[";
		for (int b = 0; b < n; b++)
		{
			cout << answer[a][b];
			if (b != n - 1)
			{
				cout << ", ";
			}
		}
		cout << "]";
		if (a != m - 1)
		{
			cout << ", ";
		}
	}
	cout << "]";

	return answer;
}

int main()
{
	vector<vector<int>> arr1 = { {1,2}, {2,3} };
	vector<vector<int>> arr2 = { {3,4}, {5,6} };
	solution(arr1, arr2);

	vector<vector<int>> arr3 = { {1}, {2} };
	vector<vector<int>> arr4 = { {3}, {4} };
	solution(arr3, arr4);

	return 0;
}