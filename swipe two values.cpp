#include<iostream>
using namespace std;
int main()
{
	float num1,num2,temp;
	cout<<" Before Swapping "<<endl;
	cout<<" Num 1 "<<endl;
	cin>>num1;
	cout<<" Num 2 "<<endl;
	cin>>num2;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<" After Swaping "<<endl;
	cout<<" Num 1 "<<endl<<num1<<endl;
	cout<<" Num 2 "<<endl<<num2<<endl;
	return 0;
}