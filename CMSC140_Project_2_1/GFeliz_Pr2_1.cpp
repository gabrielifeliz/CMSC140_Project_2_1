/*
* Class: CMSC140
* Instructor: Madhvi Shah
* Project 2 – Program 1
* Description: Program for calculating and displaying monthly expenditure report.
* Due: 09/25/2017
* Compiler: Microsoft Visual Studio 2015
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
* Student Name: Gabriel Feliz
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	string first_Item, second_Item, third_Item;
	double avg_First_Item_Exp, avg_Second_Item_Exp, avg_Third_Item_Exp;
	double monthly_First_Item_Exp, monthly_Second_Item_Exp, monthly_Third_Item_Exp;
	double total_Monthly_Exp;
	int days_In_Months;

	cout << "Enter the name of the first expense item: ";
	cin >> first_Item;

	cout << "Enter the average daily expenses for expense item 1: ";
	cin >> avg_First_Item_Exp;

	cout << "Enter the name of the second expense item: ";
	cin >> second_Item;

	cout << "Enter the average daily expenses for expense item 2: ";
	cin >> avg_Second_Item_Exp;

	cout << "Enter the name of the third expense item: ";
	cin >> third_Item;

	cout << "Enter the average daily expenses for expense item 3: ";
	cin >> avg_Third_Item_Exp;

	cout << "Enter the number of days in the month concerned: ";
	cin >> days_In_Months;

	monthly_First_Item_Exp = days_In_Months * avg_First_Item_Exp;
	monthly_Second_Item_Exp = days_In_Months * avg_Second_Item_Exp;
	monthly_Third_Item_Exp = days_In_Months * avg_Third_Item_Exp;
	total_Monthly_Exp = monthly_First_Item_Exp + monthly_Second_Item_Exp + monthly_Third_Item_Exp;

	cout << "Monthly expense for " << first_Item << " is $" << fixed << setprecision(2) << monthly_First_Item_Exp << endl;

	cout << "Monthly expense for " << second_Item << " is $" << fixed << setprecision(2) << monthly_Second_Item_Exp << endl;

	cout << "Monthly expense for " << third_Item << " is $" << fixed << setprecision(2) << monthly_Third_Item_Exp << endl;


	cout << " " << endl;
	cout << "Total monthly expenses for the month concerned is $" << fixed << setprecision(2) << total_Monthly_Exp << endl;
	cout << " " << endl;

	return 0;
}

