#include<iostream>

#include"SalesPerson.h"
using namespace std;

SalesPerson::SalesPerson()
{
	sales=0;
	commission=0;
}

SalesPerson::SalesPerson(int id, char *n, int d, int m, int y, int h, int r, int s, int c):WageEmployee(id,n,d,m,y,h,r) 	//base initialization list
{
	sales=s;
	commission=c;
}

void SalesPerson::Display()
{
	WageEmployee::Display();
	cout<<"Sales of Wage Employee: "<<sales<<endl;
	cout<<"Commission of Wage Employee: "<<commission<<endl;
}

int SalesPerson::CalSalary()
{
	return (sales * commission) + WageEmployee::CalSalary();
}
