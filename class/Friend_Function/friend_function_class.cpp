#include<iostream>
using namespace std;
class a
{
	private:
		int a,b;
	public:
		void set(int x,int y)
		{
			a=x;
			b=y;
	    }
	    friend void mul()
	    {
	    	return a*b;
		}
};
class b
{
	public:
		void display()
		{
			cout<<"the mul is :"<<mul();
		}
};
int main()
{
	a s;
	b r;
	a.set(3,4);
	b.display();
}
