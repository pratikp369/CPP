#include<iostream>
using namespace std;
class loyal
{
	private:
		int x;
	public:
		void set(int a)
		{
			x=a;
		}
		void display()
		{
			cout<<"x is :"<<x;
		}
		friend loyal operator-(loyal);
		};
 loyal operator-(loyal s)
 {
 	loyal f;
 	f.x=-s.x;
 	return f;
 }
  
int main()
{
	loyal l1,l2;
	l1.set(3);
	l1.display();
	l2=-l1;
	l2.display();
}
