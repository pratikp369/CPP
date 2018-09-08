#include<iostream>
using namespace std;
class B;
class A
{
    private:
    	int a;
    public:
    	void seta(int x)
    	{
    		a=x;
		}
    	friend void fun(A,B);
	
};
class B
{
	private:
		int b;
	public:
		void setb(int y)
		{
			b=y;
		}
		friend void fun(A,B);
};
void fun(A x,B y)
{
	cout<<"sum is :"<<x.a+y.b;
}
int main()
{
	A ob1;
	B ob2;
	ob1.seta(3);
	ob2.setb(4);
	fun(ob1,ob2);
}
