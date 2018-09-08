#include<iostream>
//#include<string.h>
using namespace std;
class std
{
	int roll;
	int mark;
	public:
		void set(int,int);
		int display()
         {
	cout<<"roll no is : "<<roll;
	cout<<"name is :"<<mark;
         }
};
void std::set(int r,int m)
{
	roll=r;
	mark=m;
}
int main()
{
	std d;
	d.set(6,7);
	d.display();
}
