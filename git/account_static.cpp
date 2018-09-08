#include<iostream>
using namespace std;
class account
{
	private:
		int balance;
		//static float rate;
	public:
		void set(int b)
		{
			balance=a;
		}
		void display()
		{
			float f;
			f=balance*rate;
		}
		float account::rate=3.0;
}
int main()
{
	account a;
	a.set(300);
	a.display();
}
