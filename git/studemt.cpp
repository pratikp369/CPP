#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
		int id;
		char name[100];
		int roll;
	class address
		{
			private:
				char d[50];
				char state[50];
				int pincode;
			public:
				void setadd(char *di, char *st,int *pi)
				{
					strcpy(d,di);
					strpy(state,st);
					pincode=pi;
				}
				void show()
				{
					cout<<"distict is :"<<d;
					cout<<"State is :"<<state;
					cout<<"pin code is :"<<pincode;
				}
		};
		address a;
		public:
		 void setid(int *i)
		 {
		 	id=i;
		  }
		  void setname(char *n)
		  {
		  	strcpy(name,n);
		   }
		   void setroll(int r)
		   {
		   	roll=r;
			}
			void setstdadd(char *d, char *s,int *p);
			{
				a.setadd(d,s,p);
			 }
			 void showstdinfo()
			 {
			 	cout<<"id is :"<<id;
			 	cout<<"name is :"<<name;
			 	cout<<"roll number is :"<<roll;
			 	a.show();
			  } 
			 
};
int main()
{
	student s;
	s.setid(111);
	s.setname("pratik");
	s.setroll(123);
	s.setstdadd("navsari","gujarat",396560);
	s.showstdinfo();
	s.show
}
