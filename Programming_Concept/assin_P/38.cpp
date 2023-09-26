#include<iostream>
using namespace std;



int mult(int a, int b=1, int c=1, int d=1)
{
	return a*b*c*d;
}

int main()
{
	int a,b,c,d;
	cout<<"Enter 4 values"<<endl;
	cin>>a>>b>>c>>d;
	
	cout<<"a x b = "<<mult(a,b)<<endl;
	cout<<"a x b x c = "<<mult(a,b,c)<<endl;
	cout<<"a x b x c x d = "<<mult(a,b,c,d)<<endl;
	return 0;
	

}
