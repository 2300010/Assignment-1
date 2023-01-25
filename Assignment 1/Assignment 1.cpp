// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "Exercice_1.h"
#include "Exercice_2.h"
#include "Exercice_5.h"
#include "Assignment 1.h"

using namespace std;

//Declare objects of the exercices classes
Exercice_1 ex1;
Exercice_2 ex2;
Exercice_5 ex5;


//Declare signatures
void Exercice1();
int Exercice2();


int main()
{
	//Declare variables for user entry
	char userEntryChoice;
	
	try
	{
		cout << "Please enter the exercice number to test it:" << endl;
		
		do 
		{
			cout << "Exercice 1" << endl;
			cout << "Exercice 2" << endl;
			cout << "Exercice 3" << endl;
			cout << "Exercice 4" << endl;
			cout << "Exercice 5" << endl;
			cout << "Exercice 6" << endl;
			cout << "Exercice 7" << endl;
			cout << "Exercice 8" << endl;
			cout << "Exercice 9" << endl;
			cout << "To quit, enter 0: ";
			cin >> userEntryChoice;

			switch (userEntryChoice)
			{
				case '1':
				{
					Exercice1();
				}
					break;
				case '2':
				{
					//Call function for Exercice 2
					Exercice2();
				}
					break;
				case '3':
				{

				}
					break;
				case '4':
				{

				}
					break;
				case '5':
				{

				}
					break;
				case '6':
				{

				}
					break;
				case '7':
				{

				}
					break;
				case '8':
				{

				}
					break;
				case '9':
				{

				}
					break;
				case '0':
				{
					cout << "\nYou are quitting the program!\n";
					system("pause");
				}
					break;
				default:
				{
					cout << "\nError! Please select a valid option:\n";
				}
					break;
			}

		} while (userEntryChoice != '0');
		
		return 1;
	}
	catch (...)
	{
		cout << "Error!";
	}
}

void Error(string message)
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "\nError! " << message << ".";
}

template <typename T>
T verifyVariable(T t) {
	while (true)
	{
		//Receive input 
		//Verify if the entry is the right type of variable and postivie
		if (cin.fail() || t <= 0)
		{
			//Reset state and content of cin
			Error("Please enter the right positive value without decimals");
		}
		else
		{
			//If fail() is false
			//Break out of the loop
			break;
		}
	}
	return t;
}

void Exercice1() {
	double unitPrice(0);
	double quantity(0);

	cout << "\nPlease enter the number of units : ";
	cin >> unitPrice;
	verifyVariable(unitPrice);

	cout << "\nPlease enter the number of quantity : ";
	cin >> quantity;
	verifyVariable(quantity);

	ex1.Number2(unitPrice, quantity);
	cout << "\n";
	
}

int Exercice2()
{
	try
	{
		//Declare variables
		int userEntryFloors;
		float userEntryPressure;
		float userEntryLab;
		float userEntryMidterm;
		float userEntryFinal;
		float userEntryPaycheck;
		float userEntryFoodExpenses;
		float userEntryHouseholdExpenses;
		float userEntryCommonExpenses;
		float userEntryTransportExpenses;
		float userEntryRent;
		float userEntryMonthlyBills;
		float userTotalExpenses;

		////Set precision to 2 decimals
		//cout << setprecision(2);

		//Ask user to enter number of floors for the building
		cout << "\nPlease enter the number of floors: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input 
			cin >> userEntryFloors;

			//Verify if the entry is the right type of variable
			if (cin.fail()) 
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive number without decimals.";
			}
			else 
			{
				//Verify if entry is lower or equal to 0
				if(userEntryFloors <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive number without decimals.";
				}
				else 
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Print result of the calculation
		cout << "\nA building of " << userEntryFloors << " floors is "
			<< ex2.BuildingHeightCalculator(userEntryFloors) << " meters.\n";

		//Ask user to enter number of floors for the building
		cout << "\nPlease enter the pressure in kPa: ";
		
		//Failsafe for variable type
		while (true)
		{
			//Receive input 
			cin >> userEntryPressure;

			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive number.";
			}
			else
			{
				if (userEntryPressure <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive number.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Print result of the conversion
		cout << "\nA pressure of " << userEntryPressure << " kPA is equal to "
			<< ex2.AtmospherePressureConverter(userEntryPressure) << " atm.\n";

		//Ask user to enter the grade for the Laboratory 
		cout << "\nPlease enter the laboratory grade: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> userEntryLab;

			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
			}
			else
			{
				if (userEntryLab <= 0 || userEntryLab > 100)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Ask user to enter the grade for the Midterm exam
		cout << "\nPlease enter the midterm exam grade: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> userEntryMidterm;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
			}
			else
			{
				if (userEntryMidterm <= 0 || userEntryMidterm > 100)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Ask user to enter the grade for the Final exam
		cout << "\nPlease enter the final exam grade: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> userEntryFinal;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
			}
			else
			{
				if (userEntryFinal <= 0 || userEntryFinal > 100)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive number equal or less than 100 with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Print final grade
		cout << "\nThe final grade of the student is "
			<< ex2.FinalGradeCalculator(userEntryLab, userEntryMidterm, userEntryFinal) << "%.\n";

		//Ask user to enter the amount for the paycheck 
		cout << "\nPlease enter your biweekly paycheck: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> userEntryPaycheck;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (userEntryPaycheck <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the food expenses
		cout << "\nPlease enter your food expenses: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> userEntryFoodExpenses;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (userEntryFoodExpenses <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the household expenses
		cout << "\nPlease enter your household expenses: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> userEntryHouseholdExpenses;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (userEntryHouseholdExpenses <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the common expenses
		cout << "\nPlease enter your common expenses: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> userEntryCommonExpenses;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (userEntryCommonExpenses <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the transport pass
		cout << "\nPlease enter your monthly transport pass: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> userEntryTransportExpenses;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (userEntryTransportExpenses <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the monthly bills
		cout << "\nPlease enter your other monthly bills: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> userEntryMonthlyBills;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (userEntryMonthlyBills <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}
		
		//Ask user to enter the amount for the rent
		cout << "\nPlease enter your rent: ";

		//Failsafe for variable type
		while (true)
		{
			//Receive input
			cin >> userEntryRent;
			//Verify if the entry is the right type of variable
			if (cin.fail())
			{
				//If fail() is true
				//Reset state and content of cin
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				//Print error message
				cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
			}
			else
			{
				if (userEntryRent <= 0)
				{
					//Reset state and content of cin
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					//Print error message
					cout << "\nError! Please enter a positive amount with maximum 2 decimals.";
				}
				else
				{
					//If fail() is false
					//Break out of the loop
					break;
				}
			}
		}

		//Set local variable to the function's return value
		userTotalExpenses = ex2.ExpensesCalculator(userEntryFoodExpenses, userEntryHouseholdExpenses,
			userEntryCommonExpenses, userEntryTransportExpenses, userEntryRent, userEntryMonthlyBills);

		//Print the result of all the operations
		cout << "\n\nYour total expenses amount to: " << userTotalExpenses << "$ per month.";
		cout << "\nYour total income is: " << userEntryPaycheck * 2 << "$ per month.";
		cout << "\nAfter all expenses are paid, you are left with: " 
			<< (userEntryPaycheck * 2) - userTotalExpenses << "$ per month.\n";

		system("pause");

		return 1;
	}
	catch (...)
	{

	}

	//Failsafe for variable type
	//while (true)
	//{
	//	//Receive input

	//	//Verify if the entry is the right type of variable
	//	if (cin.fail())
	//	{
	//		//If fail() is true
	//		//Reset state and content of cin
	//		cin.clear();
	//		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//		//Print error message
	//		cout << "\nError! Please enter a valid input in the form of numbers without decimals.";
	//	}
	//	else
	//	{
	//		//If fail() is false
	//		//Break out of the loop
	//		break;
	//	}
	//}
}

