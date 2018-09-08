#include<iostream>
using namespace std;
class account
{
	private:
	int balance;
 static	int acc;
	public:
    	void setb(int b)
		{
			balance=b;
		}
		static void seta(int a)
		{
			acc=a;
		}
		void display()
		{
			cout<<"acc no is :"<<acc;
			cout<<"balance is :"<<balance;
		}
};
int account::acc=111;
int main()
{
	account a;
	a.setb(520);
	account::seta(111);
	a.display();
}
