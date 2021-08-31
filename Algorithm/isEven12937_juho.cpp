#include<iostream>
#include<string>
#include<vector>

using namespace std;

string solution(int num) 
{
	string answer = "";
	if (num % 2 == 0 or num == 0)
	{
		answer = "Even";
	}
	else
	{
		answer = "Odd";
	}
	return answer;
}

void main()
{
	cout << solution(3) << endl;
	cout << solution(4) << endl;
}