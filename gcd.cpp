#include<iostream>
using namespace std;

int main()
{
	int j,k;
	cout<<"Enter number"<<endl;
	cin>>k;
	j=k/2+1;
	while(k%j!=0 && j>1)
	{
		j--;
	}
	if(j>1)
	{
		cout<<"The gcd of number is "<<j;
	}
	else
	{
		cout<<"It is prime number";
	}
	return 0;
}
