#include<iostream>
#include"WageEmployee.h"
using namespace std;

WageEmployee::WageEmployee()
{
	hours=0;
	rate=0;
}

WageEmployee::WageEmployee(int id, char *n, int d, int m, int y, int h, int r):Employee(id,n,d,m,y) 	//base initialization list
{
	hours=h;
	rate=r;
}

void WageEmployee::Display()
{
	Employee::Display();
	cout<<"Wage_Employee hours: "<<hours<<endl;
	cout<<"Wage_Employee rate: "<<rate<<endl;
}

int WageEmployee::CalSalary()
{
	return (hours * rate);
}
