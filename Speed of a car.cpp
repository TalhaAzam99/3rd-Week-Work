#include<iostream>
using namespace std;
int main()
{
	double distance,time,speed;
	cout<<" Enter the distance of car (in meters) "<<endl;
	cin>>distance;
	cout<<" Enter the time of a car (in seconds) "<<endl;
	cin>>time;
	speed=distance*time;
	cout<<" The speed of a car is "<<distance*time<<" m/s"<<endl;
	return 0;
}