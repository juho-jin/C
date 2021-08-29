#include <iostream>
#include <vector>

using namespace std;

bool solution(int x)
{
	bool answer = true;
	int a, b, c, d;
	int sum;
	if (x == 10000)
	{
		return answer;
	}
	else if (999 < x < 10000)
	{
		a = x / 1000;
		b = (x - (a * 1000)) / 100;
		c = (x - (a * 1000 + b * 100)) / 10;
		d = x - (a * 1000 + b * 100 + c * 10);
		sum = a + b + c + d;
		if (x % sum == 0)
		{
			return answer;
		}
		else
		{
			answer = false;
			return answer;
		}
	}
	else if (99 < x < 1000)
	{
		a = x / 100;
		b = (x - (a * 100)) / 10;
		c = x - (a * 100 + b * 10);
		sum = a + b + c;
		if (x % sum == 0)
		{
			return answer;
		}
		else
		{
			answer = false;
			return answer;
		}
	}
	else if (9 < x < 100)
	{
		a = x / 10;
		b = x - a * 10;
		sum = a + b;
		if (x % sum == 0)
		{
			return answer;
		}
		else
		{
			answer = false;
			return answer;
		}
	}
	else if (0 < x < 10)
	{
		return answer;
	}
	else
	{
		answer = false;
		return answer;
	}
	return answer;
}

int main()
{
	cout << solution(10) << ",";
	cout << solution(12) << ",";
	cout << solution(11) << ",";
	cout << solution(13) << ".";
}