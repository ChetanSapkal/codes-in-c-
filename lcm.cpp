#include<iostream>
using namespace std;

int main()
{
	int j=2,k;
	cout<<"Enter number"<<endl;
	cin>>k;
	while(k%j!=0 && j<(k/2+1))
	{
		j++;
	}
	if(j<(k/2+1))
	{
		cout<<"The LCM of number is "<<j;
	}
	else
	{
		cout<<"It is a prime number";
	}
	return 0;
}
