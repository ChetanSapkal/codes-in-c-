#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	int arr[n],duplicates;
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				duplicates=arr[i];
			}
		}
	}
	cout<<duplicates;
	return 0;
}
