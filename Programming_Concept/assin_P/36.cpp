#include<iostream>
using namespace std;

void Swap(int &ra, int &rb)
{
	int temp;
	temp = ra;
	ra = rb;
	rb = temp;

}

int main()
{
	int a,b;
	cout<<"Enter two integer value:"<<endl;
	cin>>a>>b;
	cout<<"Before swap: "<<a<<" "<<b<<endl;
	
	Swap(a,b);
	cout<<"After swap: "<<a<<" "<<b<<endl;
	return 0;
}
