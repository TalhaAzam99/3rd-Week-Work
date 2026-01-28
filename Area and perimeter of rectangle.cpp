#include<iostream>
using namespace std;
int main()
{
	float length,width,Area,perimeter;
	cout<<" Enter the length of rectangle "<<endl;
	cin>>length;
	cout<<" Enter the width of rectangle "<<endl;
	cin>>width;
	Area=length*width;
	perimeter= 2*(length+width);
	cout<<" The Area Of Rectangle = "<<Area<<" The perimeter of Rectangle = "<<perimeter<<endl;
	return 0;
}