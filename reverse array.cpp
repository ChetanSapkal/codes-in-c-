#include<iostream>
using namespace std;

int main()
{
	int n,i=0,j,m;
	cout<<"enter number of elements in array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter elements\n";
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	j=(n-1)/2;
	for(i=0;i<=j;i++)
	{
		int temp=0;
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
