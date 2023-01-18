#pragma once
class Exercice_2
{ 
	//Initialize variables
	int nbrFloors{ 0 };
	const int FIRST_FLOOR_HEIGHT{ 6 };
	const int AVERAGE_FLOOR_HEIGHT{ 4 };

public:
	//Declare function to calculate building height
	int BuildingHeightCalculator(int userEntry)
	{
		//Set nrbFloors to the value of userEntry
		nbrFloors = userEntry - 1;

		//Return calculated height of the building
		return FIRST_FLOOR_HEIGHT + (nbrFloors * AVERAGE_FLOOR_HEIGHT);
	}
};

