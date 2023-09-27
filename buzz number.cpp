#include<iostream>
using namespace std;

int main()
{
	int c;
	cout<<"Enter a number"<<endl;
	cin>>c;
	if(c%7==0 || c%10==7)
	{
		cout<<"It is a buzz nujmber"<<endl;
	}
	else
	{
		cout<<"Not a buzz number"<<endl;
	}
	return 0;
}
