#include<iostream>
#include<string.h>
using namespace std;
class myname
{
	private:
		int num;
	public:
		void set(int a)
		{
			num=a;
		}
		friend void my(myname);
		
};
void my(myname n)
{
	cout<<"name is :"<<n.num;
}
int main()
{
	myname s;
	s.set(3);
	my(s);
}
