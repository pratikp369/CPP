#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void set_data(int x,int y)
		{
					a=x;
					b=y;
		}
		void show()
		{
			cout<<"a is :"<<a<<"b is :"<<b;
		}
		complex add(complex c)
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
		}
};
int main()
{
	complex c1,c2,c3;
	c1.set_data(3,5);
	c2.set_data(3,5);
	c3=c1.add(c2);
	c3.show();
}

