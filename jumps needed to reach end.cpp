#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"Enter the number of elements\n";
	cin>>n;
	int arr[n],jumps=0;
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	i=0;
	while(i<n-1 && arr[i]!=0)
	{
		i+=arr[i];
		jumps++;
	}
	if(i<n-1)
	{
		cout<<"Couldn't reach the end";
	}
	else
	cout<<"Number of jumps needed are "<<jumps;
	return 0;
}
