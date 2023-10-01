#include<iostream>
using namespace std;

int main()
{
	int n;		// Total no of observations
	cout<<"Enter total number of Subjects: "<<endl;
	cin>>n;
	
	int * v = new int[n];    // array to store the value of all observations
	
	cout<<"Enter " <<n<<" Subjects marks" <<endl;
	for(int i=0; i<n; i++)
		cin>>v[i];
	
	cout<<endl;
	
	float sum =0;
	float average = 0;
	
	for(int i=0; i<n; i++)
		sum += v[i];
	
	cout<<"Sum = " << sum <<endl;
	
	average = (float)(sum / n);
	cout<<"Average = "<<average<<endl;
	
	return 0;
	
	
}
