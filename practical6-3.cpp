#include <iostream>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date()
	{
		getDate();
	}
	void getDate()
	{
		cout << "Enter month: ";
		cin >> month;
		cout << "Enter day: ";
		cin >> day;
		cout << "Enter year: ";
		cin >> year;
	}
	int getDay()
	{
		return day;
	}
	int getMonth()
	{
		return month;
	}
	int getYear()
	{
		return year;
	}
};

class CDAccount
{
private:
	double initialBalance;
	double interestRate;
	int term;//months until maturity
	Date* maturity; //date when CD matures

public:
	void getCDData()
	{
		cout << "Enter account initial balance: $";
		cin >> initialBalance;
		cout << "Enter account interest rate: ";
		cin >> interestRate;
		cout << "Enter the number of months until maturity: ";
		cin >> term;
		cout << "Enter the maturity date:\n";
		maturity = new Date();
	}

	double balanceAtMaturity()
	{
		double rateFraction, interest;
		rateFraction = interestRate / 100.0;
		interest = initialBalance * (rateFraction * (term / 12.0));
		return initialBalance + interest;
	}
	
	void printAccount()
	{
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "When the CD matured on "
			<< maturity->getDay()
			<< "-" << maturity->getMonth() << "-"
			<< maturity->getYear() << endl
			<< "it had a balance of $"
			<< balanceAtMaturity() << endl;
	}
	~CDAccount()
	{
		delete maturity;
		cout << "Task3 Finish" << endl;
	}
};

