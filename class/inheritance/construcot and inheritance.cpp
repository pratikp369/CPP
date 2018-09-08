#include<iostream>
class A
{
	private:
		int a;
	public:
		A(int k)
		{
			a=k;
		}
};
class B:public A
{
	int b;
	public:
		B(int x,int y):A(x)
		{
			y=b;
		}
//		void show()
//		{
//			cout<<b;
//		}
};
int main()
{
	B ob(3,4);
	//ob.show();
}
