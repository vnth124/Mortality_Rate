#include "CSwineFlu.h"
using namespace std;
#include<iostream>
CSwineFlu::CSwineFlu()
{
	Deaths = 0;
	Cases = 0;
}

CSwineFlu::~CSwineFlu()
{
}

void CSwineFlu::set()
{
	cout << "Enter number of cases affected by the virus :";
	cin >> Cases;
	cout << "Enter the  Number of Deaths :";
	cin >> Deaths;
}

float CSwineFlu::GetMortalityRate()
{
	set();
	return (Deaths / Cases) * 100;
}