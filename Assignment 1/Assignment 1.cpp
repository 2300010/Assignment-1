// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Exercice_2.h"
#include "Assignment 1.h"
using namespace std;

int main()
{
	//Declare objects of the exercices classes
	Exercice_2 ex2;

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
					cout << "Exercice 1";
				}
					break;
				case '2':
				{
					//Declare variables
					int userEntryFloors;
					float userEntryPressure;

					//Ask user to enter number of floors for the building
					cout << "\nPlease enter the number of floors: ";
					cin >> userEntryFloors;

					//Print result of the calculation
					cout << "\nA building of " << userEntryFloors << " floors is " 
						<< ex2.BuildingHeightCalculator(userEntryFloors) << " meters.\n";

					//Ask user to enter number of floors for the building
					cout << "\nPlease enter the pressure in kPa: ";
					cin >> userEntryPressure;

					//Print result of the conversion
					cout << "\nA pressure of " << userEntryPressure << " kPA is equal to " 
						<< ex2.AtmospherePressureConverter(userEntryPressure) << " atm.\n\n";

					system("pause");
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
		
	}
	catch (...)
	{
		cout << "Error!";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
