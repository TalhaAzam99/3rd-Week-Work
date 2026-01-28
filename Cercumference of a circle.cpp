#include<iostream>
using namespace std;
#define PI 3.149 
int main()
{
	float radius,circumference;
	cout<<" Enter the radius of a circle "<<endl;
	cin>>radius;
	circumference= 2*PI*radius;
	cout<<" Circumference of a circle "<<circumference<<endl;
	return 0;
}