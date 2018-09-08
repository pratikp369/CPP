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
	data operator-()
	{
		data d;
		d.x=-x;
		d.y=-y;
		return d;
	}
};
	int main()
	{
		data d1,d2;
		d1.set(4,5);
		d2=d1.operator-();
		d2.show();
	}
