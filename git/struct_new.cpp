#include<iostream>
using namespace std;
struct book
{
	int id;
	char name[10];
	int price;
	void input()
{
	cout<<"Enter book id";
	cin>>id;
	cout<<"Enter book name";
	cin>>name;
	cout<<"Enter book price";
	cin>>price;
 } 
 void display()
 {
 	cout<<"book id :"<<id<<"book name"<<name<<"book price"<<price;
 }
};
int main()
{
 book b;
 b.input();	
 b.display();
}

 
