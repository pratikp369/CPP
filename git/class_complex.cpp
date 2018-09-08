#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void setdata(int,int);
		void show();
		
		
};
void complex::setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void complex::show()
		{
			cout<<"a ="<<a<<"b ="<<b;
		}
int main()
{
	complex s;
	s.setdata(2,3);
	s.show();
}
