#include<iostream>
using namespace std;

int main()
{
	int n,i=0,a,sq,j,num,k,automorphic=0;
	cout<<"Enter a number"<<endl;
	cin>>n;
	a=n;
	while(n!=0)
	{
		n/=10;
		i++;
	}
	sq=a*a;
	for(j=0;j<i;j++)
	{
		num=sq%10;
		for(k=0;k<j;k++)
		{
			num*=10;
		}
		automorphic+=num;
		sq/=10;
	}
	if(a==automorphic)
	{
		cout<<"It is an automorphic number";
	}
	else
	{
		cout<<"Not an automorphic number";
	}
	return 0;
}
