#include<iostream>
using namespace std;
struct book
{
	int id;
	char name[10];
	int price;
};
void display(book);
book input();
int main()
{
 book b;
 b=input();	
 display(b);
}
book input()
{
	book b1;
	cout<<"Enter book id";
	cin>>b1.id;
	cout<<"Enter book name";
	cin>>b1.name;
	cout<<"Enter book price";
	cin>>b1.price;
	return(b1);
 } 
 void display(book b)
 {
 	cout<<"book id :"<<b.id<<"book name"<<b.name<<"book price"<<b.price;
 }
