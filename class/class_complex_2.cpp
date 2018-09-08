#include<iostream>
using namespace std;
class complex
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
	complex s,s1,s2;
	s.setdata(2,3);
	s1.setdata(5,7);
	s2=s.add(s1);
	s.show();
}
