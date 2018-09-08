#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		void set(int x)
		{
			a=x;
		}
		void get()
		{
			cout<<a;
		}
};
class B:protected A
{
	public:
		void setdata(int y)
		{
		   set(y);
		}
};
int main()
{
	B obj;
	obj.setdata(3);
    get();
}

