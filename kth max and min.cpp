#include<iostream>
using namespace std;

int main()
{
	int n,i=0,j;
	cout<<"Enter the number of elements\n";
	cin>>n;
	int arr[n],k;
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
	cout<<"enter the position of max and min needed\n";
	cin>>k;
	cout<<k<<"th max is "<<arr[n-k]<<endl;
	cout<<k<<"th min is "<<arr[k-1]<<endl;
	return 0;
}
