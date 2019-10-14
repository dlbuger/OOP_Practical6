#include "Task1.h"
#include "practical6-3.cpp"
#include <iostream>
#include <ctype.h>
using namespace std;

int Task1::numberOfClasses = 0;

void _pause()
{
	cout << "Press any button to continue." << endl;
	getchar();
}

void Task1Run();
void Task2Run();
void Task3Run();
int main()
{

	Task1Run();
	_pause();
	Task2Run();
	_pause();
	Task3Run();


}

void Task1Run()
{
	cout << Task1::numberOfClasses << " objects created!" << endl;
	Task1 a;
	Task1 b;
	cout << Task1::numberOfClasses << " objects created!" << endl;
	cout << "\nTask1 Finish" << endl;
}

void _trim(string str)
{
	cout << "Origin str ->\t" << str << endl;
	for (string::iterator i = str.begin(); i != str.end(); i++)
	{
		if (!isalpha(*i))
			i = str.erase(i) - 1;
	}
	cout << "After trim ->\t" << str << endl;
}

void Task2Run()
{
	_trim("Good !!! Morning!!!123");
	cout << "\nTask2 Finish" << endl;
}

void Task3Run()
{
	CDAccount account;
	cout << "Enter account data on the day account was opened:\n";
	account.getCDData();
	account.printAccount();
}