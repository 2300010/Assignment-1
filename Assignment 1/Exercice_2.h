#pragma once
class Exercice_2
{
public:
	////Declare method for the menu of the exercice
	//int ExerciceMenu2()
	//{
	//	try
	//	{
	//		//Declare variable for user entry
	//		int userEntry;


	//	}
	//	catch (...)
	//	{

	//	}
	//}

	//Declare method to calculate building height
	int BuildingHeightCalculator(int userEntry)
	{
		try
		{
			//Initialize variables
			int nbrFloors{ 0 };
			const int FIRST_FLOOR_HEIGHT{ 6 };
			const int AVERAGE_FLOOR_HEIGHT{ 4 };

			//Set nrbFloors to the value of userEntry
			nbrFloors = userEntry - 1;

			//Return calculated height of the building
			return FIRST_FLOOR_HEIGHT + (nbrFloors * AVERAGE_FLOOR_HEIGHT);
		}
		catch (...)
		{
			
		}
	}

	//Declare method to convert pressure
	int AtmospherePressureConverter(float userEntry)
	{
		try
		{
			//Initialize variables
			float kPaEntered;
			const float ONE_ATM_IN_kPa = 101.325;

			//Set kPaEntered to the value of userEntry
			kPaEntered = userEntry;

			//Return converted pressure from kPa to atm
			return kPaEntered / ONE_ATM_IN_kPa;
		}
		catch (...)
		{

		}
	}
};

