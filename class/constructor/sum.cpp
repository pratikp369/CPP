#include<iostream>
using namespace std;
class sum
{
	private:
		int x,y;
		public:
	sum(int a,int b)
	{
		x=a;
		y=b;
	}
//	int add(int a,int b)
//	{
//		int z;
//		z=x+y;
//		return z;
//	}
	void display()
	{
		cout<<"The sum is :"<<x<<y;
	}
};
int main()
{
	sum s(4,5);
	sum s2;
	s2.display();
}

