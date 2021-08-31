#include<iostream>
#include<string>
#include<vector>

using namespace std;

int solution(int num) 
{
	int answer = 0;
	int time = 0;
	bool rule = true;
	while (rule)
	{
		//입력된 수가 짝수라면 2로 나눕니다
		if (num % 2 == 0)
		{
			num /= 2;
		}
		//입력된 수가 홀수라면 3을 곱하고 1을 더합니다.
		else
		{
			num *= 3;
			num += 1;
		}

		time++;
		//결과로 나온 수에 같은 작업을 1이 될 때까지 반복합니다.
		if (num == 1 or time >= 500)
		{
			rule = false;
		}
	}
	//작업을 500번을 반복해도 1이 되지 않는다면 -1을 반환해주세요.
	if (time >= 500)
	{
		answer = -1;
	}
	else
	{
		answer = time;
	}

	return answer;
}

void main() 
{
	cout << solution(6) << endl;
	cout << solution(16) << endl;
	cout << solution(626331) << endl;//? 프로그래머스에선 안된다고 했는데 실제 가능함
}