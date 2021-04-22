#include<iostream>
using namespace std;
void swap(int a,int b)
{int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{int t;
cin>>t;
while(t--)
{
	int n;
	cout<<"Enter the number of elements:";
	cin>>n;
	int arr[n],max,min;
	cout<<"Enter value of elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	min=arr[0];
	max=arr[1];
	for(int i=0;i<n;i++)
	{ 
		if(arr[i]<min)
		{
		min=arr[i];
		}
		if(arr[i]>max)
		{
		max=arr[i];
		}
	}
	cout<<"Max element:  "<<max;
	cout<<"Min element:  "<<min;
	
}
}
