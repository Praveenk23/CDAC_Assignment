#include<iostream>
using namespace std;

int add(int a, int b)
{
	return a+b;
}

float add(float a, float b)
{
	return a+b;
}

double add(double a, double b)
{
	return a+b;
}
 
int main()
{
	cout<<"int sum "<<add(10,20)<<endl;
	cout<<"float sum "<<add(10.0f,20.0f)<<endl;
	cout<<"double sum "<<add(10.0,20.0)<<endl;
	return 0;
	
	
}
