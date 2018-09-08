#include<iostream>
class A
{
	private:
		int n;
	protected:
		void set(int a)
		{
			n=a;
		}
};
class B:public A
{
	public:
		void getdata(int x)
		{
			set(x);
		}
};
int main
{
	B obj;
	obj.getdata(4);
}
