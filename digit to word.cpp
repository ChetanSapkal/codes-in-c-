#include<iostream>
using namespace std;

int main()
{
	int i=0,s,l;
	cout<<"Enter number"<<endl;
	cin>>s;
	int arr[4],j=0;
	while(s!=0)
	{
		arr[j]=s%10;
		s/=10;
		j++;
	}
	char* arr1[10]={" ","one","two","three","four","five","six","seven","eight","nine"};
	char* arr2[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char* arr3[10]={" "," ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	l=j-1;
	while(l>-1)
	{
		if(l==3)
		{
			cout<<arr1[arr[l]]<<" thousand ";
		}
		else if(l==2)
		{
			cout<<arr1[arr[l]]<<" hundred ";
		}
		else if(l==1 && arr[l]==1)
		{
			l--;
			cout<<arr2[arr[l]];
		}
		else if(l==1 && arr[l]!=1)
		{
			cout<<arr3[arr[l]]<<" ";
		}
		else if(l==0 && arr[l+1]!=1)
		{
			cout<<arr1[arr[l]];
		}
		l--;
	}
	return 0;
}
