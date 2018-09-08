#include<iostream>
using namespace std;
class monson 
{
	public:
	monson()
	{
		cout<<"monson"<<endl;
	}
	void winter()
	{
		cout<<"Winter\n";
	}
	void summer()
	{
		cout<<"summer \n";
	}
};
int main()
{
	monson m;
	m.summer();
	m.winter();
}
