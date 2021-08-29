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

	// phone_number을 vector에 집어넣기	
	char* p_pnum = &phone_number[0];
	for (int i = 0; i < n; i++)
	{
		numarr.push_back(*p_pnum);
		p_pnum++;
	}

	//vector 객체에 넣어놓은 값을 꺼내서 * 을 입력한다.
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