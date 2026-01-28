#include<iostream>
using namespace std;
int main()
{
	float Celsius,Fahrenheit;
	cout<<" Enter the Celsius Value (In Degree) :"<<endl;
	cin>>Celsius;
	Fahrenheit=(Celsius*9/5)+32;
	cout<<" The Value Of Fahrenheit = "<<(Celsius*9/5)+32<<endl;
	cout<<" Enter the Fahrenheit Value (In Degree) "<<endl;
	cin>>Fahrenheit;
	Celsius=(Fahrenheit-32)*5/9;
	cout<<" The Value Of Celsius = "<<(Fahrenheit-32)*5/9;
	return 0;
}