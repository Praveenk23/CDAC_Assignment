#include<iostream>
#include"SalesPerson.h"
using namespace std;

/* Function Overriding - Multiple function with same name, same signature and same return type defined in different scope of classes of hierarchy of inheritance is called function overriding. 
 
   Oject Slicing - Whenever a derived class object is assigned to base class object the attributes which are specific to derived class object are sliced off from that object. This is called as object slicing.
   
   In C++, base class pointer can hold the address of derived class object but, derived class pointer cannot hold the address of base class object i.e, only upcasting is possible.
   
   Binding - It is an association of function call to the corresponding function defination.
   	
   w/o virtual funs. - Static Binding, compile Time binding, Early binding        
   with virtual funs. - Dynamic Binding, Run time binding, Late Binding
   
   Polymorphism - It is different response given by objects to a same command. In C++, polymorphism is implemented using virtual functions.
*/

int main()
{
	//Date d1(23,7,1990);
	//d1.Display();
	
	//Employee e1(420,"Chandan",14,07,1995);
	//e1.Display();
	
	
	Employee *eptr;
	WageEmployee we1(420, "Madman", 20,1,2000,8,1000);
	
	eptr = &we1;
	eptr->Display(); 
	
	
	/*
	SalesPerson s1(420, "Madman", 20,1,2000,8,1000, 4, 200);
	s1.Display();
	
	cout<<"Salary Wage Employee is: "<<s1.CalSalary()<<endl;
	
	*/
	
	
	
	return 0;

}

