#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<" Enter Your Age: "<<endl;
	cin>>a;
	bool is18;
	if (a>=18)
	is18=true;
	else
	is18=false;
	cout<<" The Person is eligible for Voting "<<is18;
	return 0;
}