#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(string phone_number)
{
	string answer = "";
	int n = phone_number.size();
	vector<char> numarr;
	char pchar;

	// phone_number�� vector�� ����ֱ�	
	char* p_pnum = &phone_number[0];
	for (int i = 0; i < n; i++)
	{
		numarr.push_back(*p_pnum);
		p_pnum++;
	}

	//vector ��ü�� �־���� ���� ������ * �� �Է��Ѵ�.
	for (int j = 0; j < n; j++)
	{
		if (j < n - 4)
		{
			answer.append("*");

		}
		else
		{
			answer.append(&numarr[j], &numarr[j + 3]);
			break;
		}
	}
	cout << answer;

	return answer;
}

int main()
{
	solution("01033334444");

	return 0;
}