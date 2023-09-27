#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter number of elements in array\n";
	cin>>n;
	int arr[n],max,start,end;
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		int sum=0;
		for(j=i;j<n;j++)
		{
			sum+=arr[j];
			if(sum>max)
			{
				max=sum;
				start=i;
				end=j;
			}
		}
	}
	cout<<"Max sum of subarray is "<<max<<endl;
	cout<<"The size of subarray is from "<<start<<" to "<<end;
	return 0;
}
