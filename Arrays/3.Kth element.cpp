#include<iostream>
using namespace std;
void sort(int arr[],int n)
{ int i,j,temp;
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"Sorted  Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
}


int main()
{
int t;
cin>>t;
while(t--)
{
	int n,k,a;
	cout<<"Enter number of elements:  ";
	cin>>n;
	int arr[n];
	cout<<"enter the value of k:  ";
	cin>>k;
	cout<<"is this kth max or min? for max press 1 for min press 0:  ";
	cin>>a;
	cout<<"Enter elements:";
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	sort(arr,n);
    if (a==0)
            cout<<"kth min element:"<<arr[k-1];
    if (a==1)
        cout<<"kth max element:"<<arr[n-k];
	
	
	
}
}



