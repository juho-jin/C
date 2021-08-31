#include<iostream>
#include"QueueArray.h"
using namespace std;

int main() 
{
	QueueArray<int> I;
	try
	{
		I.enqueue(7);
		I.enqueue(13);
		cout << I.front() << endl;
		I.delqueue();
		cout << I.front() << endl;
		cout << I.front() << endl;
		I.delqueue();
	}
	catch (const RuntimeException e)
	{
		cout << e.getMessage() << endl;
	}

	QueueArray<string> S(10);
	try
	{
		S.enqueue("Bob");
		S.enqueue("Alice");
		cout << S.front() << endl;
		S.delqueue();
		S.enqueue("Eve");
	}
	catch (const RuntimeException e)
	{
		cout << e.getMessage() << endl;
	}
	return 1;
}