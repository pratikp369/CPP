#include<iostream>
struct std
{
	int id;
	char name[10];
	int rollno;
	
	void input()
	{
		cout<<"Enter id :";
		cin>>std->id;
	    cout<<"Enter name :";
		cin>>std->name;
	    cout<<"Enter rollno :";
		cin>>std->rollno;
	}
	void display()
	{
		cout<<"Id is %d \n name is %s \n roll no is %d",<<std->id,std->name,std->rollno;
	}
};
int main()
{
	std d;
	d.input();
	d.display();
}
