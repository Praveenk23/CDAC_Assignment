#include"Date.h"

class Employee
{
	int empid;
	char name[20];
	Date dob;
public:
	Employee();
	Employee(int, char*, int, int, int);
	virtual void Display();
	//void Display();
};
