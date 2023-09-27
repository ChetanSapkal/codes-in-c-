#include<iostream>
using namespace std;

int main()
{
	int n,i=0,j,k;
	cout<<"Enter the number of elements\n";
	cin>>n;
	cout<<"Enter the change in height"<<endl;
	cin>>k;
	int arr[n],max,min;
	cout<<"Enter the elements\n";
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	max=arr[0];
	min=arr[0];
	for(j=0;j<n;j++)
	{
		if(arr[j]>max)
		{
			max=arr[j];
		}
		else if(arr[j]<min)
		{
			min=arr[j];
		}
	}
	min+=k;
	max-=k;
	if(max<min)
	{
		int temp;
		temp=min;
		min=max;
		max=temp;
	}
	if(min<0)
	{
		min=0;
	}
	cout<<"The difference between shortest and highest tower is "<<max-min<<endl;
	return 0;
}
