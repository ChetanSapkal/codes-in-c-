#include<iostream>
using namespace std;

int main()
{
	int n,i=0,j=0,m;
	cout<<"Enter the number of elements in array1 and array2"<<endl;
	cin>>n>>m;
	int arr[n],arr1[m],intersect=0,un=n;
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	cout<<"Enter elements of 2nd array\n";
	while(j<m)
	{
		cin>>arr1[j];
		j++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i]==arr1[j])
			{
				arr1[j]=0;
				intersect++;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		if(arr1[i]!=0)
		{
			un++;
		}
	}
	cout<<"Intersection elements are "<<intersect<<endl;
	cout<<"Union elements are "<<un<<endl;
	return 0;
}
