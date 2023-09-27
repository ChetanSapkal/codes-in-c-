#include<iostream>
using namespace std;

int main()
{
	int j,sq,sum=0;
	cout<<"Enter a number";
	cin>>j;
	sq=j*j;
	while(sq!=0)
	{
		sum+=sq%10;
		sq/=10;
	}
	if(sum==j)
	{
		cout<<"It is a neon number";
	}
	else
	{
		cout<<"Not a neon number";
	}
	return 0;
}
