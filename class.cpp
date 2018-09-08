#include<iostream>
class bike
  {
  	public:
  		int a,b,c;
  		int get(int a,int b)
  		{
  	return	c=a+b;
  	}
  };
  int main()
  {
  	int x;
  bike bk;
  x=bk.get(2,3);
  cout<<"sum is %d"<<x;
  }
