#include<iostream>
using namespace std;
class number
{
	private:
		int n;
	public:
		void set(int x)
		{
			n=x;
		}
		void show()
		{
			cout<<"n is :"<<n;
			cout<<"\n";
		}
		number operator++()
		{
			number temp;
			temp.n=++n;
			return temp;
		}
		number operator++(int)
		{
			number p;
			p.n=n++;
			return p;
		}
};
int main()
{
number n1,n2,n3;
n1.set(6);
n1.show();
n2=++n1;
n2.show();
n3=n1.operator++();
n3.show();
}
