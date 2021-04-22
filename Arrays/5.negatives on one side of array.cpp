#include<iostream>
using namespace std;
void swap(int a, int b);
 

int main()
{
int t;
cin>>t;
while(t--)
{
	int n;
	cout<<"Enter number of elements:  ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements:";
		for(int j=0;j<n;j++)
		cin>>arr[j];
	int i=-1,temp;
	for(int j=0;j<n;j++)
	{
		if(arr[j]<0)
		{
			i++;
				
	        temp=arr[i];
	        arr[i]=arr[j];      //Swap function
	        arr[j]=temp;
			
		}
	}
	cout<<"result"<<endl;
	for(int j=0;j<n;j++)
	cout<<" "<<arr[j];
		
}
}
void swap(int a,int b)
{

}
