#include<iostream>
using namespace std;
class cricket
{
	public:
	~cricket()
	{
	cout<<"Destroy";
	}
};
int play()
{
	cricket p;
}
int main()
{
	play();
}
