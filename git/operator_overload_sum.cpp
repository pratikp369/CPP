#include<iostream>
using namespace std;
class data
{
	private:
		int x,y;
		public:
   void	set(int a,int b)
	{
		x=a;
		y=b;
	}
	void show()
	{
		cout<<"x is :"<<x;
		cout<<"y is :"<<y;
	}
	data operator+(data d)
	{
		data e;
		e.x=x+d.x;
		e.y=y+d.y;
		return e;
	}
};
	int main()
	{
		data d1,d2,d3;
		d1.set(4,5);
		d2.set(3,5);
		d3=d1.operator+(d2);
		d3.show();
	}
