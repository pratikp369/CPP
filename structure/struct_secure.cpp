#include<iostream>
using namespace std;
struct emp
{
	private:
	int id;
	char name[10];
	int age;
	public:
	void input()
	{
		printf("Enter id :");
		scanf("%d",&id);
		printf("Enter name:");
		scanf("%s",&name);
		printf("Enter age :");
		scanf("%d",&age);
	}
	void display()
	{
		cout<<"id is :"<<id<<"\n";
		cout<<"name is : "<<name<<"\n";
		cout<<"age is :"<<age<<"\n";
	}
};
int main()
{
	struct emp e;
	e.input();
	e.display();
}
