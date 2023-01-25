#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class Exercice_1 {
    public:

        //Declaring method that calculates QC taxes
        double Number2(double unitPrice, double quantity) 
        {
			try
			{
				//Initialize variables
				const float GST(7);
				const float QST(7.5);
				float totalGST(unitPrice * quantity * (GST / 100));
				float totalQST(unitPrice * quantity * (QST / 100));

				cout << "\nGST : " << totalGST;
				cout << "\nQST : " << totalQST;
				cout << "\nTotal Price After Taxes : " << ((unitPrice*quantity)+totalGST + totalQST) << "\n";


				return totalGST + totalQST;
			}
			catch (...)
			{

			}
        }


};

