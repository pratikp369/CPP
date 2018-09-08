#include<iostream>
using namespace std;
class std
{
	template <class x>
	private:
	x a,b;	
public:	
void set(x a,x b)
{
	return a+b;
}
void show()
{
	cout<<" a is :"<<a;
	cout<<" b is :"<<b;
}
};
int main()
{
	int a;
	std s;
	a=s.set(3,4);
	cout<<a;
	s.show();
}
