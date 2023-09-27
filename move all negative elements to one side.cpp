#include<iostream>
using namespace std;

int main()
{
	int n,i=0,j;
	cout<<"Enter the number of elements\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements\n";
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	i=0;
	while(i<n)
	{
		cout<<arr[i]<<" ";
		i++;
	}
	return 0;
}
