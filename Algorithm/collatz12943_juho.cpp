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
		//�Էµ� ���� ¦����� 2�� �����ϴ�
		if (num % 2 == 0)
		{
			num /= 2;
		}
		//�Էµ� ���� Ȧ����� 3�� ���ϰ� 1�� ���մϴ�.
		else
		{
			num *= 3;
			num += 1;
		}

		time++;
		//����� ���� ���� ���� �۾��� 1�� �� ������ �ݺ��մϴ�.
		if (num == 1 or time >= 500)
		{
			rule = false;
		}
	}
	//�۾��� 500���� �ݺ��ص� 1�� ���� �ʴ´ٸ� -1�� ��ȯ���ּ���.
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
	cout << solution(626331) << endl;//? ���α׷��ӽ����� �ȵȴٰ� �ߴµ� ���� ������
}