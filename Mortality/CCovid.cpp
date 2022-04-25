#include "CCovid.h"
using namespace std;
#include<iostream>
#include <conio.h>
CCovid::CCovid()
{
	Deaths = 0;
	Cases = 0;
}

CCovid::~CCovid()
{
}



void CCovid::set()
{
	cout << "Enter number of cases affected by the virus :";
	cin >> Cases;
	cout << "Enter the  Number of Deaths :";
	cin >> Deaths;
}


float CCovid::GetMortalityRate()
{
	set();
	return (Deaths / Cases) * 100;
}