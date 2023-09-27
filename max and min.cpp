#include<iostream>
using namespace std;

int main()
{
	int n,i=0,j;
	cout<<"Enter the number of elements\n";
	cin>>n;
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
	cout<<"Max is "<<max<<endl;
	cout<<"Min is "<<min<<endl;
	return 0;
}
