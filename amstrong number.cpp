#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int i,n,a=0,b,m,sum=0;
	cin>>n;
	m=n;
	while(n!=0)
	{
		n=n/10;
		a++;
	}
	while(m!=0)
	{
		b=m%10;
		sum+=pow(b,a);
		m=m/10;
	}
	cout<<sum;
}
