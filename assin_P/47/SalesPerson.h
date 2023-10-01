#include"WageEmployee.h"

class SalesPerson:public WageEmployee
{
	int sales;
	int commission;
public:
	SalesPerson();
	SalesPerson(int, char*, int, int, int, int, int, int, int);
	void Display();
	
	int CalSalary();
};
