#include <iostream>
#include <vector>

using namespace std;

double solution(vector<int> arr)
{
	double answer = 0;
	double sum = 0;
	int size = arr.size();

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	answer = sum / size;

	return answer;
}

int main()
{
	vector<int> arr1 = { 1,2,3,4 };
	vector<int> arr2 = { 5,5 };

	cout << solution(arr1) << " ";
	cout << solution(arr2);
}