#include <iostream>
#include "StackArray.h"
using namespace std;

int main()
{
	try
	{
		StackArray<int> A;
		A.push(7);
		A.push(13);
		A.push(15);
		A.size();
		cout << A.top() << endl;
		A.pop();
		A.push(9);
		cout << A.top() << endl;
		cout << A.top() << endl;
		A.pop();
		A.pop();

	}
	catch (const RuntimeException e)
	{
		cout << e.getMessage() << endl;
	}

	try
	{
		StackArray<string> B(10);
		B.push("Bob");
		B.push("Alice");
		cout << B.top() << endl;
		B.pop();
		B.push("Eve");
	}
	catch (const RuntimeException e)
	{
		cout << e.getMessage() << endl;
	}
}