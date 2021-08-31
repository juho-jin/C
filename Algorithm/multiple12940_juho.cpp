#include<iostream>
#include<string>
#include<vector>

using namespace std;

template<typename T>
//vertor '<<' overload 
ostream& operator<<(ostream& os, const vector<T>& v)
{
	os << "[";
	for (int i = 0; i < v.size(); i++)
	{
		os << v[i];
		if (i != v.size() - 1)
		{
			os << ",";
		}
	}
	os << "]\n";
	return os;
}

vector<int> solution(int n, int m) 
{
	vector<int> answer;
	int gcd = 0;	//the greatest common denominator(GCD,최대공약수)
	int lcm = 0;	//the least common multiple(LCM,최소공배수)
	int num = 1;	//조사값
	int max = n*m;  //최대값
	int temp = 0;	//빈공간
	bool rule = true;

	if (n > m)
	{
		temp = n;
		n = m;
		m = temp;
	}

	while (rule)
	{
		//최대공약수 구하기
		if (gcd == 0)
		{
			if (num != 0)
			{
				++num;
			}
			if (num > n)
			{
				num = 1;
			}
			if (n % num == 0 and m % num == 0)
			{
				gcd = num;
				answer.push_back(gcd);
				num = 0;
			}
		}
		//최소공배수 구하기
		else
		{
			if (num == 0)
			{
				num = m;
			}
			if (num % n == 0 and num % m == 0)
			{
				lcm = num;
				answer.push_back(lcm);
				rule = false;
			}
			if (num != 0 and num < max)
			{
				++num;
			}
		}
	}

	return answer;
}

void main() 
{
	cout << solution(3, 12);
	cout << solution(5, 2);
}