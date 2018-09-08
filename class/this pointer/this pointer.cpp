#include<iostream>
using namespace std;
class box
{
	private:
		int x,y,z;
	public:
		void set(int x,int y,int z)
		{
			this->x=x;
			this->y=y;
			this->z=z;
		}
		void show()
		{
			cout<<"x"<<x<<"y"<<y<<"z"<<z;
		}
};
int main()
{
	box b,*p;
	//b.set(3,4,5);
	//b.show();
	p=&b;
	p->set(2,3,4);
	p->show();
}
