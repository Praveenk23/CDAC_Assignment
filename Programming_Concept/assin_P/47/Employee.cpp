#include<iostream>
#include<cstring>
#include"Employee.h"
using namespace std;

Employee::Employee()
{
	empid=101;
	strcpy(name,"abc");
}

Employee::Employee(int id, char *n, int d, int m, int y):dob(d,m,y) //member list initialization
{
	empid=id;
	strcpy(name,n);
}

void Employee::Display()
{
	cout<<"Employee ID: "<<empid<<endl;
	cout<<"Employee Name: "<<name<<endl;
	cout<<"DOB of Employee: "; 
	dob.Display();
}
