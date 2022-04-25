using namespace std;
#include <conio.h>
#include <iostream>
#include "CCovid.h"
#include "CHiv.h"
#include "CSwineFlu.h"
#include <iomanip>

int main()
{
	int choice;


	cout << "Select a number to get Mortality rate" << endl;
	cout << "1. Covid Virus \n2. Hiv Virus \n3. Swine Flu " << endl;
	cin >> choice;
	cout << endl;


	switch (choice)
	{
	case 1:
	{
		CCovid covid;
		cout << "Mortality Rate for Covid virus is " << covid.GetMortalityRate()<< endl;
		cout << endl;
		break;
	}
	case 2:
	{
		CHiv hiv;
		cout << "Mortality Rate for Hiv virus is " << hiv.GetMortalityRate()<< endl;
		cout << endl;
		break;
	}
	case 3:
	{
		CSwineFlu h1n1;
		cout << "Mortality Rate for Swine Flu is " << h1n1.GetMortalityRate()<< endl;
		cout << endl;
		break;
	}

	default:
		cout << "Invalid choice";
		cout << endl;
		break;
	}




}