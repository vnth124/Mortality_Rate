#include "CHiv.h"
using namespace std;
#include <iostream>


CHiv::CHiv()
{
	Deaths = 0;
	Cases = 0;
}

CHiv::~CHiv()
{
}

void CHiv::set()
{
	cout << "Enter number of cases affected by the virus :";
	cin >> Cases;
	cout << "Enter the  Number of Deaths :";
	cin >> Deaths;
}

float CHiv::GetMortalityRate()
{
	set();
	return (Deaths / Cases) * 1000;
}