#include<iostream>
int area(int);
int area(int,int);
using namespace std;
int main()
{
	int a,b,c;
	int d;
	cout<<"Enter Number :";
	cin>>a>>b;
	c=area(a);
	d=area(a,b);
	cout<<"area is :"<<c<<"\n";
	cout<<"area is :"<<d<<"\n";
	return 0;
}
int area(int x)
{
	return 3.14*x*x;
}
int area(int x,int y)
{
	return x*y;
}
