#include<iostream>
using namespace std;
struct complex
{
	private:
		int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"a ="<<a<<"b ="<<b;
		}
};
int main()
{
	complex s;
	s.setdata(2,3);
	s.show();
}
